#include <iostream>
#include "PaintingManager.h"


 string PaintingManager::ArtistName(){
  return ArtistName_;
 }

 int PaintingManager::ID(){
     return ID_;
 }

 string PaintingManager::Title(){
     return Title_;
 }

 void PaintingManager::ID(int identity){
     ID_=identity;
 }

 void PaintingManager::ArtistName(string artistname){
     ArtistName_=artistname;
 }

 void PaintingManager::Title(string title){
     Title_=title;
 }
