#pragma once

enum class Response
{
    // Ход сделан
    OK,
    // Отмена последнего хода
    BACK,
    // Сброс игры
    REPLAY,
    // Выход из игры
    QUIT,
    // Клик по клетке
    CELL
};
