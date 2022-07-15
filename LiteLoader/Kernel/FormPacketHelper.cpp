#include <Global.h>
#include <FormUI.h>
#include <LLAPI.h>
#include <I18nAPI.h>

#include <Impl/FormPacketHelper.h>
#include <Nlohmann/fifo_json.hpp>
#include <Utils/DbgHelper.h>
#include <Main/LiteLoader.h>

#include <MC/ServerNetworkHandler.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>

using namespace std;

//////////////////////////////// Data ////////////////////////////////

enum class FormType { SimpleFormBuilder, CustomFormBuilder, SimpleFormPacket, CustomFormPacket, ModalFormPacket };

unordered_map<unsigned, FormType> formTypes;

unordered_map<unsigned, std::function<void(Player*, int)>> simpleFormPacketCallbacks;
unordered_map<unsigned, std::function<void(Player*, bool)>> modalFormPacketCallbacks;
unordered_map<unsigned, std::function<void(Player*, string)>> customFormPacketCallbacks;

unordered_map<unsigned, std::shared_ptr<Form::SimpleForm>> simpleFormBuilders;
unordered_map<unsigned, std::shared_ptr<Form::CustomForm>> customFormBuilders;


//////////////////////////////// Functions ////////////////////////////////

#define RAND_FORM_ID() (unsigned)((rand() << 16) + rand())

unsigned NewFormId() {
    unsigned formId;
    do {
        formId = RAND_FORM_ID();
    } while (formTypes.find(formId) != formTypes.end());
    return formId;
}

void SetSimpleFormPacketCallback(unsigned formId, std::function<void(Player*, int)> callback) {
    formTypes[formId] = FormType::SimpleFormPacket;
    simpleFormPacketCallbacks[formId] = callback;
}

void SetModalFormPacketCallback(unsigned formId, std::function<void(Player*, bool)> callback) {
    formTypes[formId] = FormType::ModalFormPacket;
    modalFormPacketCallbacks[formId] = callback;
}

void SetCustomFormPacketCallback(unsigned formId, std::function<void(Player*, string)> callback) {
    formTypes[formId] = FormType::CustomFormPacket;
    customFormPacketCallbacks[formId] = callback;
}

void SetSimpleFormBuilderData(unsigned formId, std::shared_ptr<Form::SimpleForm> data) {
    formTypes[formId] = FormType::SimpleFormBuilder;
    simpleFormBuilders[formId] = data;
}

void SetCustomFormBuilderData(unsigned formId, std::shared_ptr<Form::CustomForm> data) {
    formTypes[formId] = FormType::CustomFormBuilder;
    customFormBuilders[formId] = data;
}

void HandleFormPacket(Player* player, unsigned formId, const string& data) {
    if (formTypes.find(formId) == formTypes.end())
        return;

    if (formTypes[formId] == FormType::SimpleFormBuilder) {
        int chosen = data != "null" ? stoi(data) : -1;

        // Simple Form Builder
        auto form = simpleFormBuilders[formId];
        if (form->callback)
            form->callback(player, chosen);
        // Button Callback
        if (chosen >= 0) {
            auto button = dynamic_pointer_cast<Form::Button>(form->elements[chosen]);
            if (button->callback)
                button->callback(player);
        }
        simpleFormBuilders.erase(formId);
    } else if (formTypes[formId] == FormType::CustomFormBuilder) {
        // Custom Form Builder
        auto form = customFormBuilders[formId];

        if (data == "null") {
            customFormBuilders.erase(formId);
            if (form->callback)
                form->callback(player, {});
            return;
        }

        fifo_json res = fifo_json::parse(data);
        int nowIndex = 0;
        for (fifo_json& j : res) {
            switch (form->getType(nowIndex)) {
                case Form::CustomFormElement::Type::Label: // label's data is null
                    break;
                case Form::CustomFormElement::Type::Input:
                    form->setValue(nowIndex, j.get<string>());
                    break;
                case Form::CustomFormElement::Type::Toggle:
                    form->setValue(nowIndex, j.get<bool>());
                    break;
                case Form::CustomFormElement::Type::Slider:
                    form->setValue(nowIndex, j.get<int>());
                    break;
                case Form::CustomFormElement::Type::Dropdown: {
                    auto& options = dynamic_pointer_cast<Form::Dropdown>(form->elements[nowIndex].second)->options;
                    form->setValue(nowIndex, options[j.get<int>()]);
                    break;
                }
                case Form::CustomFormElement::Type::StepSlider: {
                    auto& options = dynamic_pointer_cast<Form::StepSlider>(form->elements[nowIndex].second)->options;
                    form->setValue(nowIndex, options[j.get<int>()]);
                    break;
                }
                default:
                    break;
            }
            nowIndex++;
        }

        if (form->callback) {
            std::map<string, std::shared_ptr<Form::CustomFormElement>> callbackData;
            for (auto& [k, v] : form->elements)
                callbackData[k] = v;

            form->callback(player, callbackData);
        }

        customFormBuilders.erase(formId);
    } else if (formTypes[formId] == FormType::SimpleFormPacket) {
        int chosen = data != "null" ? stoi(data) : -1;
        simpleFormPacketCallbacks[formId](player, chosen);
        simpleFormPacketCallbacks.erase(formId);
    } else if (formTypes[formId] == FormType::CustomFormPacket) {
        customFormPacketCallbacks[formId](player, data);
        customFormPacketCallbacks.erase(formId);
    } else if (formTypes[formId] == FormType::ModalFormPacket) {
        int chosen = data == "true" ? 1 : 0;
        modalFormPacketCallbacks[formId](player, chosen);
        modalFormPacketCallbacks.erase(formId);
    }
    formTypes.erase(formId);
}


//////////////////////////////// Form Callback ////////////////////////////////
class Packet;
class ServerNetworkHandler;
class NetworkIdentifier;

Player* GetPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* id, Packet* packet) {
    return (Player*)handler->getServerPlayer(*id, dAccess<char>(packet, 16));
}

TClasslessInstanceHook(void,
                       "?handle@?$PacketHandlerDispatcherInstance@VModalFormResponsePacket@@$0A@@@"
                       "UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
                       NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket) {
    try {
        Packet* packet = *(Packet**)pPacket;
        ServerPlayer* sp = handler->getServerPlayer(*id, 0);

        if (sp) {
            unsigned formId = dAccess<unsigned>(packet, 48);
            string data = dAccess<string>(packet, 56);

            if (data.back() == '\n')
                data.pop_back();

            HandleFormPacket(sp, formId, data);
        }
    } catch (const seh_exception& e) {
        logger.error("Event Callback Failed!");
        logger.error("SEH Uncaught Exception Detected!");
        logger.error("{}", TextEncoding::toUTF8(e.what()));
        logger.error("In Event: onFormSelected");
        PrintCurrentStackTraceback();
    } catch (...) {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: onFormSelected");
        PrintCurrentStackTraceback();
    }

    original(this, id, handler, pPacket);
}