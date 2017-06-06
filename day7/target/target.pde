int displayWidth = 800 , displayHeight = 800;

int rad, n = 10;
void setup(){
  size(displayWidth , displayHeight);
  background(255);
}
void draw()
{ rad=100;
  if (mousePressed){
    drawTarget( mouseX, mouseY, n);
    delay(200);
  }
  
}
void drawTarget(int x, int y, int n)
{
  for(int j=0; j<n; j++)
  for(int i=0;  rad>=0; i++)
   { if(i%2==0)
     {
       fill(0); 
       ellipse(x, y, rad , rad );
     }
    else
      {
        fill(255);
        ellipse(mouseX, mouseY, rad , rad );
      }
    rad-=10;
    delay(100);
   }  
}