#pragma once
#include <Impl/FormPacketHelper.h>
#include "../FormUI.hpp"
#include "../../Tools/NativeCallbackConverter.hpp"

namespace MC
{
ref class Player;
}

namespace LLNET::Helper
{
ref class FormPacketHelper abstract
{
public:
    delegate void SimpleFormPacketCallbackHandler(MC::Player ^, int);
    delegate void ModalFormPacketCallbackHandler(MC::Player ^, bool);
    delegate void CustomFormPacketCallbackHandler(MC::Player ^, System::String ^);

    static unsigned int NewFormId();

    static void SetSimpleFormPacketCallback(unsigned formId, SimpleFormPacketCallbackHandler^ callback);

    static void SetModalFormPacketCallback(unsigned formId, ModalFormPacketCallbackHandler^ callback);

    static void SetCustomFormPacketCallback(unsigned formId, CustomFormPacketCallbackHandler ^ callback);

    static void SetSimpleFormBuilderData(unsigned formId, Form::SimpleForm^ data);

    static void SetCustomFormBuilderData(unsigned formId, Form::CustomForm^ data);

    static void HandleFormPacket(MC::Player^ player, unsigned formId, System::String^ data);
};
}