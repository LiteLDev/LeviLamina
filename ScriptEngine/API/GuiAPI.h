#pragma once
#include "APIHelp.h"

#include <FormUI.h>

//////////////////// Classes ////////////////////

class SimpleFormClass : public ScriptClass {
private:
    Form::SimpleForm form;

public:
    SimpleFormClass();

    Form::SimpleForm* get() {
        return &form;
    }

    static Local<Object> newForm();
    static Form::SimpleForm* extract(Local<Value> v);
    static bool sendForm(Form::SimpleForm* form, Player* player, script::Local<Function>& callback);

    Local<Value> setTitle(const Arguments& args);
    Local<Value> setContent(const Arguments& args);
    Local<Value> addButton(const Arguments& args);
};
extern ClassDefine<SimpleFormClass> SimpleFormClassBuilder;


class CustomFormClass : public ScriptClass {
private:
    Form::CustomForm form;

public:
    CustomFormClass();

    Form::CustomForm* get() {
        return &form;
    }

    static Local<Object> newForm();
    static Form::CustomForm* extract(Local<Value> v);
    static bool sendForm(Form::CustomForm* form, Player* player, script::Local<Function>& callback);

    Local<Value> setTitle(const Arguments& args);
    Local<Value> addLabel(const Arguments& args);
    Local<Value> addInput(const Arguments& args);
    Local<Value> addSwitch(const Arguments& args);
    Local<Value> addDropdown(const Arguments& args);
    Local<Value> addSlider(const Arguments& args);
    Local<Value> addStepSlider(const Arguments& args);
};
extern ClassDefine<CustomFormClass> CustomFormClassBuilder;