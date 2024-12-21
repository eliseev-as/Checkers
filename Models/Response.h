#pragma once

enum class Response
{
    // Ход сделан
    OK,
    // Отмена последнего хода
    BACK,
    // Начало игры
    REPLAY,
    // Выход из игры
    QUIT,
    // Нахождение шашки в пределах игрового поля
    CELL
};
