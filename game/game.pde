int x, y, storlek = 60;
int x2, y2, storlek2=200;
PImage bild= new PImage();

//Projectile bullet1= new Projectile(0,0);
void setup() {
  //fullScreen();
  //size( 100 , 80);
  bild= loadImage("ilska.jpeg");
  size( 1280, 800);
}

void draw() {
  //         RÖD GRÖN blå
  background(0, 0, 0);
  fill(255, 0, 0);
  rect(x2, y2, storlek2, 3000);
  image(bild,x,y,storlek,storlek);
  
  fill(0, 255, 0);
  ellipse(x, y, storlek, storlek);

  if (x > width) x=width;
  if (y > height) y=height;
  if (x < 0) x=0;
  if (y < 0) y=0;
}

void keyPressed() {
  if (key=='a') {
    x = x - 20;  // cirkel går åt vänster
  }
  if (key=='d') {
    x= x + 20;
  }
  if (key=='w') {
    y= y-10;
  }
  if (key=='s') {
    y= y+10;
  }


  if (keyCode==LEFT) {
    x2 = x2 - 20;  // cirkel går åt vänster
  }
  if (keyCode==RIGHT) {
    x2= x2 + 20;
  }
  if (keyCode==UP) {
    y2= y2-10;
  }
  if (keyCode==DOWN) {
    y2= y2+10;
  }
}


void mousePressed() {
  println(mouseX +"  "+mouseY);
}