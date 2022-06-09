PImage img;
void setup(){
  size(500,300);
  img = loadImage("jjj.jpg");
}
void draw(){
  image(img,mouseX,mouseY);
}
