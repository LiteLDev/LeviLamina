#include "APIHelp.h"
#include "GuiAPI.h"
#include "PlayerAPI.h"
#include "McAPI.h"
#include <Engine/GlobalShareData.h>
#include <Engine/LocalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <SendPacketAPI.h>
#include <MC/Player.hpp>
#include <iostream>

using namespace std;
using namespace Form;

//////////////////// Class Definition ////////////////////

ClassDefine<SimpleFormClass> SimpleFormClassBuilder =
    defineClass<SimpleFormClass>("LXL_SimpleForm")
        .constructor(nullptr)
        .instanceFunction("setTitle", &SimpleFormClass::setTitle)
        .instanceFunction("setContent", &SimpleFormClass::setContent)
        .instanceFunction("addButton", &SimpleFormClass::addButton)
        .build();

ClassDefine<CustomFormClass> CustomFormClassBuilder =
    defineClass<CustomFormClass>("LXL_CustomForm")
        .constructor(nullptr)
        .instanceFunction("setTitle", &CustomFormClass::setTitle)
        .instanceFunction("addLabel", &CustomFormClass::addLabel)
        .instanceFunction("addInput", &CustomFormClass::addInput)
        .instanceFunction("addSwitch", &CustomFormClass::addSwitch)
        .instanceFunction("addDropdown", &CustomFormClass::addDropdown)
        .instanceFunction("addSlider", &CustomFormClass::addSlider)
        .instanceFunction("addStepSlider", &CustomFormClass::addStepSlider)
        .build();

//////////////////// Simple Form ////////////////////

SimpleFormClass::SimpleFormClass()
    :ScriptClass(ScriptClass::ConstructFromCpp<SimpleFormClass>{}),form("","")
{ }

//生成函数
Local<Object> SimpleFormClass::newForm()
{
    auto newp = new SimpleFormClass();
    return newp->getScriptObject();
}

Form::SimpleForm* SimpleFormClass::extract(Local<Value> v)
{
    if (EngineScope::currentEngine()->isInstanceOf<SimpleFormClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<SimpleFormClass>(v)->get();
    else
        return nullptr;
}

bool SimpleFormClass::sendForm(Form::SimpleForm* form, Player* player, script::Local<Function> &callback)
{
    script::Global<Function> callbackFunc{ callback };

    return form->sendTo((ServerPlayer*)player,
        [engine{ EngineScope::currentEngine() }, callback{ std::move(callbackFunc) }]
        (Player* pl, int chosen)
        {
            EngineScope scope(engine);
            try
            {
                if(chosen < 0)
                    callback.get().call({}, PlayerClass::newPlayer(pl), Local<Value>());
                else
                    callback.get().call({}, PlayerClass::newPlayer(pl), Number::newNumber(chosen));
            }
            catch (const Exception& e)
            {
                logger.error("Fail in form callback!");
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                PrintException(e);
            }
        });
}

//成员函数
Local<Value> SimpleFormClass::setTitle(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        form.title = args[0].toStr();
        return this->getScriptObject();
    }
    CATCH("Fail in setTitle!")
}

Local<Value> SimpleFormClass::setContent(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        form.content = args[0].toStr();
        return this->getScriptObject();
    }
    CATCH("Fail in setTitle!")
}

Local<Value> SimpleFormClass::addButton(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try {
        string image = args.size() >= 2 ? args[1].toStr() : "";
        form.append(Button(args[0].toStr(), image));
        return this->getScriptObject();
    }
    CATCH("Fail in addButton!")
}



//////////////////// Custom Form ////////////////////

CustomFormClass::CustomFormClass()
    :ScriptClass(ScriptClass::ConstructFromCpp<CustomFormClass>{}),form("")
{ }


//生成函数
Local<Object> CustomFormClass::newForm()
{
    auto newp = new CustomFormClass();
    return newp->getScriptObject();
}

CustomForm* CustomFormClass::extract(Local<Value> v)
{
    if(EngineScope::currentEngine()->isInstanceOf<CustomFormClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<CustomFormClass>(v)->get();
    else
        return nullptr;
}

vector<string> CustomFormResultToString(std::shared_ptr<Form::CustomForm> form, const std::map<string, std::shared_ptr<CustomFormElement>>& data, Local<Array> &arr)
{
    if (data.empty())
        return { "null" };

    vector<string> res;
    for (int i=0;i< form->elements.size(); ++i)
    {
        switch (form->getType(i))
        {
        case CustomFormElement::Type::Label:
            arr.add(Local<Value>());
            break;
        case CustomFormElement::Type::Input:
            arr.add(String::newString(form->getString(i)));
            break;
        case CustomFormElement::Type::Toggle:
            arr.add(Boolean::newBoolean(form->getBool(i)));
            break;
        case CustomFormElement::Type::Dropdown:
            arr.add(Number::newNumber(form->getNumber(i)));
            break;
        case CustomFormElement::Type::Slider:
            arr.add(Number::newNumber(form->getNumber(i)));
            break;
        case CustomFormElement::Type::StepSlider:
            arr.add(Number::newNumber(form->getNumber(i)));
            break;
        }
    }
    return res;
}

//成员函数
bool CustomFormClass::sendForm(Form::CustomForm* form, Player* player, script::Local<Function>& callback)
{
    script::Global<Function> callbackFunc{ callback };

    return form->sendTo((ServerPlayer*)player,
        [form {make_shared<Form::CustomForm>(*form)}, engine{EngineScope::currentEngine()}, callback{std::move(callbackFunc)}]
    (Player* pl, const std::map<string, std::shared_ptr<CustomFormElement>>& data)
    {
        EngineScope scope(engine);
        try
        {
            if (data.empty()) {
                callback.get().call({}, PlayerClass::newPlayer(pl), Local<Value>());
                return;
            }
            Local<Array> arr = Array::newArray();
            CustomFormResultToString(form, data, arr);        //========================= Change =========================
            callback.get().call({}, PlayerClass::newPlayer(pl), arr);
        }
        catch (const Exception& e)
        {
            logger.error("Fail in form callback!");
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            logger.error << e << ::Logger::endl;
        }
    });
}

Local<Value> CustomFormClass::setTitle(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,1)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)

    try{
        form.title = args[0].toStr();
        return this->getScriptObject();
    }
    CATCH("Fail in setTitle!")
}

Local<Value> CustomFormClass::addLabel(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,1)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)

    try{
        form.append(Label(args[0].toStr(), args[0].toStr()));
        return this->getScriptObject();
    }
    CATCH("Fail in addLabel!")
}

Local<Value> CustomFormClass::addInput(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,1)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)
    if(args.size() >= 2)
        CHECK_ARG_TYPE(args[1],ValueKind::kString);
    if(args.size() >= 3)
        CHECK_ARG_TYPE(args[2],ValueKind::kString);

    try{
        string placeholder = args.size() >= 2 ? args[1].toStr() : "";
        string def = args.size() >= 3 ? args[2].toStr() : "";
        
        form.append(Input(args[0].toStr(), args[0].toStr(), placeholder, def));
        return this->getScriptObject();
    }
    CATCH("Fail in addInput!")
}

Local<Value> CustomFormClass::addSwitch(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,1)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)
    if(args.size() >= 2)
        CHECK_ARG_TYPE(args[1],ValueKind::kBoolean);

    try{
        bool def = args.size() >= 2 ? args[1].asBoolean().value() : false;
        
        form.append(Toggle(args[0].toStr(), args[0].toStr(), def));
        return this->getScriptObject();
    }
    CATCH("Fail in addSwitch!")
}

Local<Value> CustomFormClass::addDropdown(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,2)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)
    CHECK_ARG_TYPE(args[1],ValueKind::kArray);
    if(args.size() >= 3)
        CHECK_ARG_TYPE(args[2],ValueKind::kNumber);

    try{
        auto optionsArr = args[1].asArray();
        vector<string> options;
        for (int i = 0; i < optionsArr.size(); ++i)
            options.push_back(optionsArr.get(i).toStr());

        int def = args.size() >= 3 ? args[2].asNumber().toInt32() : 0;
        
        form.append(Dropdown(args[0].toStr(), args[0].toStr(), options, def));
        return this->getScriptObject();
    }
    CATCH("Fail in addDropdown!")
}

Local<Value> CustomFormClass::addSlider(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,3)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)
    CHECK_ARG_TYPE(args[1],ValueKind::kNumber);
    CHECK_ARG_TYPE(args[2],ValueKind::kNumber);
    if(args.size() >= 4)
        CHECK_ARG_TYPE(args[3],ValueKind::kNumber);
    if(args.size() >= 5)
        CHECK_ARG_TYPE(args[4],ValueKind::kNumber);

    try{
        int minValue = args[1].asNumber().toInt32();
        int maxValue = args[2].asNumber().toInt32();
        if(minValue >= maxValue)
            maxValue = minValue + 1;
        
        int step = args.size() >= 4 ? args[3].asNumber().toInt32() : 1;
        int defValue = args.size() >= 5 ? args[4].asNumber().toInt32() : minValue;
        if (defValue < minValue || defValue > maxValue)
            defValue = minValue;
        
        form.append(Slider(args[0].toStr(), args[0].toStr(), minValue, maxValue, step, defValue));
        return this->getScriptObject();
    }
    CATCH("Fail in addSlider!")
}

Local<Value> CustomFormClass::addStepSlider(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,2)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)
    CHECK_ARG_TYPE(args[1],ValueKind::kArray);
    if(args.size() >= 3)
        CHECK_ARG_TYPE(args[2],ValueKind::kNumber);

    try{
        auto stepsArr = args[1].asArray();
        vector<string> steps;
        for (int i = 0; i < stepsArr.size(); ++i)
            steps.push_back(stepsArr.get(i).toStr());

        int defIndex = args.size() >= 3 ? args[2].asNumber().toInt32() : 0;
        
        form.append(StepSlider(args[0].toStr(), args[0].toStr(), steps, defIndex));
        return this->getScriptObject();
    }
    CATCH("Fail in addStepSlider!")
}


//////////////////// APIs ////////////////////

Local<Value> McClass::newSimpleForm(const Arguments& args)
{
    return SimpleFormClass::newForm();
}

Local<Value> McClass::newCustomForm(const Arguments& args)
{
    return CustomFormClass::newForm();
}


//表单回调
bool CallFormCallback(Player* player, unsigned formId, const string& data)
{
    bool passToBDS = true;

    try
    {
        for (auto engine : currentModuleEngines)
        {
            EngineScope enter(engine);
            FormCallbackData callback;
            try
            {
                callback = ENGINE_GET_DATA(engine)->formCallbacks.at(formId);
            }
            catch (...)
            {
                continue;
            }

            EngineScope scope(callback.engine);
            Local<Value> res{};
            try
            {
                res = callback.func.get().call({}, PlayerClass::newPlayer(player), JsonToValue(data));
            }
            catch (const Exception& e)
            {
                logger.error("Form Callback Failed!");
                logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
                logger.error << e << ::Logger::endl;
            }
            if (res.isNull() || (res.isBoolean() && res.asBoolean().value() == false))
                passToBDS = false;

            ENGINE_OWN_DATA()->formCallbacks.erase(formId);
        }
    }
    catch (...)
    {
        ;
    }

    return passToBDS;
}


//////////////////// Helper ////////////////////

bool SendFormPacket(Player* player, const string& data)
{
    BinaryStream wp;
    wp.reserve(32 + data.size());
    wp.writeUnsignedVarInt((unsigned)((rand() << 16) + rand()));       //?????????
    wp.writeString(data);   

    NetworkPacket<100> pkt{ wp.getAndReleaseData() };
    player->sendNetworkPacket(pkt);
    return true;
}

int SendSimpleForm(Player* player, const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images)
{
    string model = u8R"({"title": "%s","content":"%s","buttons":%s,"type":"form"})";
    model = model.replace(model.find("%s"), 2, title);
    model = model.replace(model.find("%s"), 2, content);

    fifo_json buttonText;
    for (int i = 0; i < buttons.size(); ++i)
    {
        fifo_json oneButton;
        oneButton["text"] = buttons[i];
        if (!images[i].empty())
        {
            fifo_json image;
            image["type"] = images[i].find("textures/") == 0 ? "path" : "url";
            image["data"] = images[i];
            oneButton["image"] = image;
        }
        buttonText.push_back(oneButton);
    }
    model = model.replace(model.find("%s"), 2, buttonText.dump());

    return SendFormPacket(player, model);
}

int SendModalForm(Player* player, const string& title, const string& content, const string& button1, const string& button2)
{
    string model = R"({"title":"%s","content":"%s","button1":"%s","button2":"%s","type":"modal"})";
    model = model.replace(model.find("%s"), 2, title);
    model = model.replace(model.find("%s"), 2, content);
    model = model.replace(model.find("%s"), 2, button1);
    model = model.replace(model.find("%s"), 2, button2);

    return SendFormPacket(player, model);
}

int SendCustomForm(Player* player, const std::string& data)
{
    return SendFormPacket(player, data);
}
