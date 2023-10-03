#include "liteloader/api/FormUI.h"

#include "liteloader/api/Impl/FormPacketHelper.h"
#include "liteloader/api/utils/fifo_json.h"

//////////////////////////////// Data ////////////////////////////////

enum class FormType {
    SimpleFormBuilder,
    ModalFormBuilder,
    CustomFormBuilder,
    SimpleFormPacket,
    ModalFormPacket,
    CustomFormPacket
};

unordered_map<uint, FormType> formTypes;

unordered_map<uint, std::function<void(Player*, int)>>    simpleFormPacketCallbacks;
unordered_map<uint, std::function<void(Player*, bool)>>   modalFormPacketCallbacks;
unordered_map<uint, std::function<void(Player*, string)>> customFormPacketCallbacks;

unordered_map<uint, std::shared_ptr<Form::SimpleForm>> simpleFormBuilders;
unordered_map<uint, std::shared_ptr<Form::ModalForm>>  modalFormBuilders;
unordered_map<uint, std::shared_ptr<Form::CustomForm>> customFormBuilders;


//////////////////////////////// Functions ////////////////////////////////

#define RAND_FORM_ID() (uint)((rand() << 16) + rand())

uint NewFormId() {
    uint formId;
    do {
        formId = RAND_FORM_ID();
    } while (formTypes.find(formId) != formTypes.end());
    return formId;
}

void SetSimpleFormPacketCallback(uint formId, std::function<void(Player*, int)> callback) {
    formTypes[formId]                 = FormType::SimpleFormPacket;
    simpleFormPacketCallbacks[formId] = callback;
}

void SetModalFormPacketCallback(uint formId, std::function<void(Player*, bool)> callback) {
    formTypes[formId]                = FormType::ModalFormPacket;
    modalFormPacketCallbacks[formId] = callback;
}

void SetCustomFormPacketCallback(uint formId, std::function<void(Player*, string)> callback) {
    formTypes[formId]                 = FormType::CustomFormPacket;
    customFormPacketCallbacks[formId] = callback;
}

void SetSimpleFormBuilderData(uint formId, std::shared_ptr<Form::SimpleForm> data) {
    formTypes[formId]          = FormType::SimpleFormBuilder;
    simpleFormBuilders[formId] = data;
}

void SetModalFormBuilderData(uint formId, std::shared_ptr<Form::ModalForm> data) {
    formTypes[formId]         = FormType::ModalFormBuilder;
    modalFormBuilders[formId] = data;
}

void SetCustomFormBuilderData(uint formId, std::shared_ptr<Form::CustomForm> data) {
    formTypes[formId]          = FormType::CustomFormBuilder;
    customFormBuilders[formId] = data;
}

void HandleFormPacket(Player* player, uint formId, string const& data) {
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
    } else if (formTypes[formId] == FormType::ModalFormBuilder) {
        int chosen = data == "true" ? 1 : 0;

        // Modal Form Builder
        auto form = modalFormBuilders[formId];
        if (form->callback)
            form->callback(player, chosen);
        modalFormBuilders.erase(formId);
    } else if (formTypes[formId] == FormType::CustomFormBuilder) {
        // Custom Form Builder
        auto form = customFormBuilders[formId];

        if (data == "null") {
            customFormBuilders.erase(formId);
            if (form->callback)
                form->callback(player, {});
            return;
        }

        fifo_json res      = fifo_json::parse(data);
        int       nowIndex = 0;
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
                form->setValue(nowIndex, j.get<double>());
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
            ++nowIndex;
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
