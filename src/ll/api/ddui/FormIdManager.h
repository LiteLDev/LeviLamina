#pragma once

#include "ll/api/base/Macro.h"

class Player;

namespace ll::ddui {

class CustomForm;
class MessageBox;

class FormIdManager {
public:
    LLNDAPI static uint genFormId();

    LLNDAPI static CustomForm* getCustomForm(uint id);
    LLNDAPI static CustomForm* getCustomForm(Player& player);

    LLNDAPI static MessageBox* getMessageBox(uint id);
    LLNDAPI static MessageBox* getMessageBox(Player& player);
};

} // namespace ll::ddui
