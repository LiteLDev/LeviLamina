#include <memory>
#include <third-party/Nlohmann/fifo_json.hpp>

#include <MC/BinaryStream.hpp>
#include <MC/FormUI.hpp>
#include <MC/Packet.hpp>
#include <MC/ServerPlayer.hpp>
#include <SendPacketAPI.h>
using namespace std;

#define RAND_FORM_ID() (unsigned)((rand() << 16) + rand())

//////////////////////////////// Form Id & Data ////////////////////////////////
map<unsigned, bool> isSimpleForm;
map<unsigned, std::shared_ptr<Form::SimpleForm>> simpleForms;
map<unsigned, std::shared_ptr<Form::CustomForm>> customForms;

unsigned NewFormId()
{
    unsigned formId;
    do {
        formId = RAND_FORM_ID();
    } while (isSimpleForm.find(formId) != isSimpleForm.end());
    return formId;
}

namespace Form
{
//////////////////////////////// Simple Form ////////////////////////////////
string Button::serialize()
{
    fifo_json button;
    button["text"] = text;
    if (!image.empty())
    {
        fifo_json imageObj;
        imageObj["type"] = image.find("textures/") == 0 ? "path" : "url";
        imageObj["data"] = image;
        button["image"] = imageObj;
    }
    return button.dump();
}

SimpleForm& SimpleForm::setTitle(const string& title)
{
    this->title = title;
    return *this;
}

SimpleForm& SimpleForm::setContent(const string& content)
{
    this->content = content;
    return *this;
}


SimpleForm& SimpleForm::append(const Button& element)
{
    elements.emplace_back(make_shared<Button>(element));
    return *this;
}

string SimpleForm::serialize()
{
    fifo_json form = fifo_json::parse(R"({"title":"","content":"","buttons":[],"type":"form"})");
    form["title"] = title;
    form["content"] = content;
    for (auto& e : elements)
        form["buttons"].push_back(fifo_json::parse(e->serialize()));
    return form.dump();
}

bool SimpleForm::sendTo(ServerPlayer* player, Callback callback)
{
    unsigned id = NewFormId();
    isSimpleForm[id] = true;
    simpleForms[id] = make_shared<SimpleForm>(*this);

    string data = serialize();
    BinaryStream wp;
    wp.reserve(32 + data.size());
    wp.writeUnsignedInt(id);
    wp.writeString(data);

    NetworkPacket<100> pkt{wp.getAndReleaseData()};
    player->sendNetworkPacket(pkt);
    return true;
}

//////////////////////////////// Custom Form ////////////////////////////////
string Label::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "label";
    itemAdd["text"] = text;
    return itemAdd.dump();
}

string Input::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "input";
    itemAdd["text"] = title;
    if (!placeholder.empty())
        itemAdd["placeholder"] = placeholder;
    if (!def.empty())
        itemAdd["default"] = def;
    return itemAdd.dump();
}

string Toggle::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "toggle";
    itemAdd["text"] = title;
    if (def)
        itemAdd["default"] = def;
    return itemAdd.dump();
}

string Dropdown::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "dropdown";
    itemAdd["text"] = title;

    fifo_json items = fifo_json::array();
    for (auto& str : options)
        items.push_back(str);
    itemAdd["options"] = items;

    if (def > 0)
        itemAdd["default"] = def;
    return itemAdd.dump();
}

string Slider::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "slider";
    itemAdd["text"] = title;

    if (min >= max)
        max = min + 1;
    itemAdd["min"] = min;
    itemAdd["max"] = max;
    itemAdd["step"] = step >= 1 ? step : 1;
    if (def > 0 && min <= def && max >= def)
    {
        itemAdd["default"] = def;
    }
    return itemAdd.dump();
}

string StepSlider::serialize()
{
    fifo_json itemAdd;
    itemAdd["type"] = "step_slider";
    itemAdd["text"] = title;

    fifo_json items = fifo_json::array();
    for (auto& str : options)
        items.push_back(str);
    itemAdd["steps"] = items;

    int maxIndex = items.size() - 1;
    if (def >= 0 && def <= maxIndex)
    {
        itemAdd["default"] = def;
    }
    return itemAdd.dump();
}

CustomForm& CustomForm::setTitle(const string& title)
{
    this->title = title;
    return *this;
}

CustomForm& CustomForm::append(const Label& element)
{
    elements[element.name] = make_shared<Label>(element);
    dataInfo.push_back(element.name);
    return *this;
}

CustomForm& CustomForm::append(const Input& element)
{
    elements[element.name] = make_shared<Input>(element);
    dataInfo.push_back(element.name);
    return *this;
}

CustomForm& CustomForm::append(const Toggle& element)
{
    elements[element.name] = make_shared<Toggle>(element);
    dataInfo.push_back(element.name);
    return *this;
}

CustomForm& CustomForm::append(const Dropdown& element)
{
    elements[element.name] = make_shared<Dropdown>(element);
    dataInfo.push_back(element.name);
    return *this;
}

CustomForm& CustomForm::append(const Slider& element)
{
    elements[element.name] = make_shared<Slider>(element);
    dataInfo.push_back(element.name);
    return *this;
}

CustomForm& CustomForm::append(const StepSlider& element)
{
    elements[element.name] = make_shared<StepSlider>(element);
    dataInfo.push_back(element.name);
    return *this;
}

string CustomForm::serialize()
{
    fifo_json form = fifo_json::parse(R"({ "title":"", "type":"custom_form", "content":[], "buttons":[] })");
    form["title"] = title;
    for (auto& i : dataInfo)
        form["content"].push_back(fifo_json::parse(elements[i]->serialize()));
    return form.dump();
}

bool CustomForm::sendTo(ServerPlayer* player, Callback callback)
{
    unsigned id = NewFormId();
    isSimpleForm[id] = false;
    customForms[id] = make_shared<CustomForm>(*this);

    string data = serialize();
    BinaryStream wp;
    wp.reserve(32 + data.size());
    wp.writeUnsignedInt(id);
    wp.writeString(data);

    NetworkPacket<100> pkt{wp.getAndReleaseData()};
    player->sendNetworkPacket(pkt);
    return true;
}
} // namespace Form

using namespace Form;

//////////////////////////////// Form Callback ////////////////////////////////
class Packet;
class ServerNetworkHandler;
class NetworkIdentifier;

Player* GetPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* id, Packet* packet)
{
    return handler->getServerPlayer(*id, dAccess<char>(packet, 16));
}

void CallFormCallback(Player* player, unsigned formId, const string& data)
{
    if (isSimpleForm.find(formId) == isSimpleForm.end())
        return;

    if (isSimpleForm[formId])
    {
        int chosen = stoi(data);

        //Simple Form Callback
        auto form = simpleForms[formId];
        if (form->callback)
            form->callback(chosen);
        //Button Callback
        auto button = dynamic_pointer_cast<Button>(form->elements[chosen]);
        if (button->callback)
            button->callback();

        simpleForms.erase(formId);
    }
    else
    {
        //Custom Form Callback
        auto form = customForms[formId];

        fifo_json res = fifo_json::parse(data);
        int nowIndex = 0;
        for (fifo_json& j : res)
        {
            switch (form->getType(nowIndex++))
            {
            case CustomFormElement::Type::Input:
                form->setData<Input>(nowIndex, j.get<string>());
                break;
            case CustomFormElement::Type::Toggle:
                form->setData<Toggle>(nowIndex, j.get<bool>());
                break;
            case CustomFormElement::Type::Dropdown:
                form->setData<Dropdown>(nowIndex, j.get<int>());
                break;
            case CustomFormElement::Type::Slider:
                form->setData<Slider>(nowIndex, j.get<int>());
                break;
            case CustomFormElement::Type::StepSlider:
                form->setData<StepSlider>(nowIndex, j.get<int>());
                break;
            }
        }

        if (form->callback)
            form->callback(form->elements);
        customForms.erase(formId);
    }
    isSimpleForm.erase(formId);
}

THook(void, "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
      void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    try
    {
        Packet* packet = *(Packet**)pPacket;
        Player* p = GetPlayerFromPacket(handler, id, packet);

        if (p)
        {
            unsigned formId = dAccess<unsigned>(packet, 48);
            string data = dAccess<string>(packet, 56);

            if (data.back() == '\n')
                data.pop_back();

            CallFormCallback(p, formId, data);
        }
    }
    catch (const seh_exception& e)
    {
        logger.error("Event Callback Failed!");
        logger.error("SEH Uncaught Exception Detected!");
        logger.error("{}", e.what());
        logger.error("In Event: onFormSelected");
    }
    catch (...)
    {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: onFormSelected");
    }

    original(_this, id, handler, pPacket);
}