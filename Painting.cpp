#include <iostream>
#include "Painting.h"

 string Painting::ArtistName(){
  return ArtistName_;
 }

 int Painting::ID(){
     return ID_;
 }

 string Painting::Title(){
     return Title_;
 }

 void Painting::ID(int identity){
     ID_=identity;
 }

 void Painting::ArtistName(string artistname){
     ArtistName_=artistname;
 }

 void Painting::Title(string title){
     Title_=title;
 }
