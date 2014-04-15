/*
=================
cSprite.h
- Header file for class definition - SPECIFICATION
- Header file for the Sprite class
=================
*/
#ifndef _CPlayer_H
#define _CPlayer_H
#include "cD3DXTexture.h"
#include "cSprite.h"

class cPlayer : public cSprite
{
private:
	D3DXVECTOR3 playerPos;
	D3DXVECTOR2 playerPos2D;
	D3DXVECTOR2 playerTranslation;
	cD3DXTexture playerTexture;
	D3DXVECTOR2 playerCentre;
public:
	cPlayer();			// Default constructor
	cPlayer(D3DXVECTOR3 sPosition, LPDIRECT3DDEVICE9 pd3dDevice, LPCSTR theFilename); // Constructor
	~cPlayer();			// Destructor
	//D3DXVECTOR3 getPlayerPos();  // Return the sprites current position
	//void setPlayerPos(D3DXVECTOR3 sPosition); // set the position of the sprite
	//D3DXVECTOR2 getPlayerPos2D();  // Return the sprites current 2D position
	//void setPlayerPos2D(D3DXVECTOR3 sPosition); // set the 2D position of the sprite
	//D3DXVECTOR2 GetTranslation();		// Return the sprites translation
	//void SetTranslation (D3DXVECTOR2 Translation);		// set the translation for the sprite
	//LPDIRECT3DTEXTURE9 getTexture();  // Return the sprites current image
	//void setTexture(LPDIRECT3DDEVICE9 pd3dDevice, LPCSTR theFilename);  // set the image of the sprite
	//void setPlayerCentre();      // set the centre of the sprite for rotation
	//D3DXVECTOR2 getPlayerCentre();      // return the centre of the sprite for rotation
};

#endif
