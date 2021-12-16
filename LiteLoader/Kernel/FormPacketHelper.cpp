#include <Global.h>
#include <Impl/FormPacketHelper.h>
#include <map>
#include <FormUI.h>
#include <memory>
#include <unordered_map>
#include <functional>
#include <third-party/Nlohmann/fifo_json.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Player.hpp>
using namespace std;

//////////////////////////////// Data ////////////////////////////////

enum class FormType {
	SimpleFormBuilder, CustomFormBuilder, SimpleFormPacket, CustomFormPacket, ModalFormPacket
};

unordered_map<unsigned, FormType> formTypes;

unordered_map<unsigned, std::function<void(int)>> simpleFormPacketCallbacks;
unordered_map<unsigned, std::function<void(bool)>> modalFormPacketCallbacks;
unordered_map<unsigned, std::function<void(string)>> customFormPacketCallbacks;

unordered_map<unsigned, std::shared_ptr<Form::SimpleForm>> simpleFormBuilders;
unordered_map<unsigned, std::shared_ptr<Form::CustomForm>> customFormBuilders;


//////////////////////////////// Functions ////////////////////////////////

#define RAND_FORM_ID() (unsigned)((rand() << 16) + rand())

unsigned NewFormId()
{
    unsigned formId;
    do {
        formId = RAND_FORM_ID();
    } while (formTypes.find(formId) != formTypes.end());
    return formId;
}

void SetSimpleFormPacketCallback(unsigned formId, std::function<void(int)> callback)
{
	formTypes[formId] = FormType::SimpleFormPacket;
	simpleFormPacketCallbacks[formId] = callback;
}

void SetModalFormPacketCallback(unsigned formId, std::function<void(bool)> callback)
{
	formTypes[formId] = FormType::ModalFormPacket;
	modalFormPacketCallbacks[formId] = callback;
}

void SetCustomFormPacketCallback(unsigned formId, std::function<void(string)> callback)
{
	formTypes[formId] = FormType::CustomFormPacket;
	customFormPacketCallbacks[formId] = callback;
}

void SetSimpleFormBuilderData(unsigned formId, std::shared_ptr<Form::SimpleForm> data)
{
	formTypes[formId] = FormType::SimpleFormBuilder;
	simpleFormBuilders[formId] = data;
}

void SetCustomFormBuilderData(unsigned formId, std::shared_ptr<Form::CustomForm> data)
{
	formTypes[formId] = FormType::CustomFormBuilder;
	customFormBuilders[formId] = data;
}

void HandleFormPacket(Player* player, unsigned formId, const string& data)
{
    if (formTypes.find(formId) == formTypes.end())
        return;

    if (formTypes[formId] == FormType::SimpleFormBuilder)
    {
        int chosen = data != "null" ? stoi(data) : -1;

        //Simple Form Builder
        auto form = simpleFormBuilders[formId];
        if (form->callback)
            form->callback(chosen);
        //Button Callback
        if (chosen >= 0) {
            auto button = dynamic_pointer_cast<Form::Button>(form->elements[chosen]);
            if (button->callback)
                button->callback();
        }
        simpleFormBuilders.erase(formId);
    }
    else if(formTypes[formId] == FormType::CustomFormBuilder)
    {
        //Custom Form Builder
        auto form = customFormBuilders[formId];

        fifo_json res = fifo_json::parse(data);
        int nowIndex = 0;
        for (fifo_json& j : res)
        {
            switch (form->getType(nowIndex))
            {
            case Form::CustomFormElement::Type::Input:
                form->setData<Form::Input>(nowIndex, j.get<string>());
                break;
            case Form::CustomFormElement::Type::Toggle:
                form->setData<Form::Toggle>(nowIndex, j.get<bool>());
                break;
            case Form::CustomFormElement::Type::Dropdown:
                form->setData<Form::Dropdown>(nowIndex, j.get<int>());
                break;
            case Form::CustomFormElement::Type::Slider:
                form->setData<Form::Slider>(nowIndex, j.get<int>());
                break;
            case Form::CustomFormElement::Type::StepSlider:
                form->setData<Form::StepSlider>(nowIndex, j.get<int>());
                break;
            default:
                break;
            }
            nowIndex++;
        }

        if (form->callback)
        {
            std::map<string, std::shared_ptr<Form::CustomFormElement>> callbackData;
            if (data == "null")
                return form->callback(callbackData);
            for (auto& [k, v] : form->elements)
                callbackData[k] = v;

            form->callback(callbackData);
        }

        customFormBuilders.erase(formId);
    }
    else if (formTypes[formId] == FormType::SimpleFormPacket)
    {
        int chosen = data != "null" ? stoi(data) : -1;
        simpleFormPacketCallbacks[formId](chosen);
        simpleFormPacketCallbacks.erase(formId);
    }
    else if (formTypes[formId] == FormType::CustomFormPacket)
    {
        customFormPacketCallbacks[formId](data);
        customFormPacketCallbacks.erase(formId);
    }
    else if (formTypes[formId] == FormType::ModalFormPacket)
    {
        int chosen = data == "true" ? 1 : 0;
        modalFormPacketCallbacks[formId](chosen);
        modalFormPacketCallbacks.erase(formId);
    }
    formTypes.erase(formId);
}


//////////////////////////////// Form Callback ////////////////////////////////
class Packet;
class ServerNetworkHandler;
class NetworkIdentifier;

Player* GetPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* id, Packet* packet)
{
    return (Player*)handler->getServerPlayer(*id, dAccess<char>(packet, 16));
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

            HandleFormPacket(p, formId, data);
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