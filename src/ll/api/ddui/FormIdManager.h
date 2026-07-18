#pragma once

#include "ll/api/base/Macro.h"

class Player;

namespace ll::ddui {

class CustomForm;
class MessageBox;

class FormIdManager {
public:
    LLNDAPI static uint genFormId();

    LLAPI static void close(Player const& player);

private:
    static CustomForm* getCustomForm(Player const& player);
    static MessageBox* getMessageBox(Player const& player);
};

} // namespace ll::ddui
