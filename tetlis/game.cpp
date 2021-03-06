#include "game.h"


//*****************************************************************************
//  コンストラクタ
//*****************************************************************************
Game::Game()
{
    board_.init();
}


//*****************************************************************************
//  デストラクタ
//*****************************************************************************
Game::~Game()
{
}


//*****************************************************************************
//  初期化
//*****************************************************************************
bool Game::init()
{
    // クラス初期化
    if( !mino_.init() ) return false;
    if( !field_.init() ) return false;
    if( !board_.init() ) return false;

    return true;
}


//*****************************************************************************
//  更新
//*****************************************************************************
bool Game::update()
{
    mino_.update( &board_ ); // ミノクラス更新
    board_.update();

    return true;
}


//*****************************************************************************
//  描画
//*****************************************************************************
void Game::draw()
{
    field_.draw();
    board_.draw();
    mino_.draw();
}



//*****************************************************************************
//  破棄
//*****************************************************************************
void Game::destroy()
{
    mino_.destroy();
    board_.destroy();
    field_.destroy();
}