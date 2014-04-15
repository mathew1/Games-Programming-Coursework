/*
=================
cSprite.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cPlayer.h"
/*
=================
- Data constructor initializes the cSprite to the data passed to 
- the constructor from the paramater sPosition.
- Is always called, thus ensures all sprite objects are in a consistent state.
=================
*/
cPlayer::cPlayer(): cSprite() 			// Default constructor
{

	cPlayer::playerPos.x = 0.0f;
	cPlayer::playerPos.y = 0.0f;
	cPlayer::playerPos.z = 0.0f;
	//cSprite::setTexture(new cD3DXTexture());
}
cPlayer::cPlayer(D3DXVECTOR3 sPosition, LPDIRECT3DDEVICE9 pd3dDevice, LPCSTR theFilename): cSprite(sPosition,pd3dDevice,theFilename) // Constructor
{
	//D3DXVECTOR2 translation = D3DXVECTOR2(0,0);
	//cPlayer::setPlayerPos(sPosition);
	//cPlayer::setPlayerPos2D(sPosition);
	//cPlayer::setTexture(pd3dDevice, theFilename);
	//cPlayer::playerTexture.setTextureInfo(theFilename);
	//cPlayer::SetTranslation(translation);
	//cPlayer::setPlayerCentre();
}
/*
=================
- Destructor 
=================
*/
cPlayer::~cPlayer()			// Destructor
{
}
/*
=================
- Return the sprites current position.
=================
*/

//D3DXVECTOR3 cPlayer::getPlayerPos()  // Return the sprites current position
//{
//	return cPlayer::playerPos;
//}
///*
//=================
//- set the position of the sprite.
//=================
//*/
//
//void cPlayer::setPlayerPos(D3DXVECTOR3 sPosition)  // set the position of the sprite
//{
//	cPlayer::playerPos = sPosition;
//}
///*
//=================
//- Return the sprites current 2D position.
//=================
//*/
//D3DXVECTOR2 cPlayer::getPlayerPos2D()   // Return the sprites current 2D position
//{
//	return cPlayer::playerPos2D;
//}
//
///*
//=================
//- set the 2D position of the sprite.
//=================
//*/
//void cPlayer::setPlayerPos2D(D3DXVECTOR3 sPosition)  // set the 2D position of the sprite
//{
//	cPlayer::playerPos2D.x = sPosition.x;
//	cPlayer::playerPos2D.y = sPosition.y;
//}
//
///*
//=================
//- Return the sprites translation.
//=================
//*/
//
//D3DXVECTOR2 cPlayer::GetTranslation() 		// Return the sprites translation
//{
//	return cPlayer::playerTranslation;
//}
//
///*
//=================
//- set the position of the sprite.
//=================
//*/
//void cPlayer::SetTranslation (D3DXVECTOR2 Translation) 		// set the translation for the sprite
//{
//	cPlayer::playerTranslation = Translation;
//}
//
///*
//=================
//- Return the sprites current image.
//=================
//*/
//
//LPDIRECT3DTEXTURE9 cPlayer::getTexture()  // Return the sprites current image
//{
//	return cPlayer::playerTexture.getTexture();
//}
///*
//=================
//- set the image of the sprite.
//=================
//*/
//
//void cPlayer::setTexture(LPDIRECT3DDEVICE9 pd3dDevice, LPCSTR theFilename)  // set the image of the sprite
//{
//	cPlayer::playerTexture.createTexture(pd3dDevice, theFilename);
//}
///*
//=================
//- set the image of the sprite.
//=================
//*/
//
//void cPlayer::setPlayerCentre()      // set the centre of the sprite for rotation
//{
//	D3DXIMAGE_INFO aTextureInfo;
//	aTextureInfo = cPlayer::playerTexture.getTextureInfo();
//	cPlayer::playerCentre.x = (float)aTextureInfo.Height/2;
//	cPlayer::playerCentre.y = (float)aTextureInfo.Width/2;
//}
///*
//=================
//- set the image of the sprite.
//=================
//*/
//D3DXVECTOR2 cPlayer::getPlayerCentre()      // return the centre of the sprite for rotation
//{
//	return cPlayer::playerCentre;
//}
