class Projectile {
  int x, y;

  public Projectile(int x_, int y_) {
    x=x_;
    y=y_;    
  }
  void display(){
    ellipse(x,y,10,10);
  }
}