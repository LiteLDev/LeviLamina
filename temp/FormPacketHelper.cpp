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

unordered_map<uint32_t, FormType> formTypes;

unordered_map<uint32_t, std::function<void(Player*, int32_t)>>    simpleFormPacketCallbacks;
unordered_map<uint32_t, std::function<void(Player*, bool)>>   modalFormPacketCallbacks;
unordered_map<uint32_t, std::function<void(Player*, string)>> customFormPacketCallbacks;

unordered_map<uint32_t, std::shared_ptr<Form::SimpleForm>> simpleFormBuilders;
unordered_map<uint32_t, std::shared_ptr<Form::ModalForm>>  modalFormBuilders;
unordered_map<uint32_t, std::shared_ptr<Form::CustomForm>> customFormBuilders;


//////////////////////////////// Functions ////////////////////////////////

#define RAND_FORM_ID() (uint32_t)((rand() << 16) + rand())

uint32_t NewFormId() {
    uint32_t formId;
    do {
        formId = RAND_FORM_ID();
    } while (formTypes.find(formId) != formTypes.end());
    return formId;
}

void SetSimpleFormPacketCallback(uint32_t formId, std::function<void(Player*, int32_t)> callback) {
    formTypes[formId]                 = FormType::SimpleFormPacket;
    simpleFormPacketCallbacks[formId] = callback;
}

void SetModalFormPacketCallback(uint32_t formId, std::function<void(Player*, bool)> callback) {
    formTypes[formId]                = FormType::ModalFormPacket;
    modalFormPacketCallbacks[formId] = callback;
}

void SetCustomFormPacketCallback(uint32_t formId, std::function<void(Player*, string)> callback) {
    formTypes[formId]                 = FormType::CustomFormPacket;
    customFormPacketCallbacks[formId] = callback;
}

void SetSimpleFormBuilderData(uint32_t formId, std::shared_ptr<Form::SimpleForm> data) {
    formTypes[formId]          = FormType::SimpleFormBuilder;
    simpleFormBuilders[formId] = data;
}

void SetModalFormBuilderData(uint32_t formId, std::shared_ptr<Form::ModalForm> data) {
    formTypes[formId]         = FormType::ModalFormBuilder;
    modalFormBuilders[formId] = data;
}

void SetCustomFormBuilderData(uint32_t formId, std::shared_ptr<Form::CustomForm> data) {
    formTypes[formId]          = FormType::CustomFormBuilder;
    customFormBuilders[formId] = data;
}

void HandleFormPacket(Player* player, uint32_t formId, const string& data) {
    if (formTypes.find(formId) == formTypes.end())
        return;

    if (formTypes[formId] == FormType::SimpleFormBuilder) {
        int32_t chosen = data != "null" ? stoi(data) : -1;

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
        int32_t chosen = data == "true" ? 1 : 0;

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
        int32_t       nowIndex = 0;
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
                form->setValue(nowIndex, options[j.get<int32_t>()]);
                break;
            }
            case Form::CustomFormElement::Type::StepSlider: {
                auto& options = dynamic_pointer_cast<Form::StepSlider>(form->elements[nowIndex].second)->options;
                form->setValue(nowIndex, options[j.get<int32_t>()]);
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
        int32_t chosen = data != "null" ? stoi(data) : -1;
        simpleFormPacketCallbacks[formId](player, chosen);
        simpleFormPacketCallbacks.erase(formId);
    } else if (formTypes[formId] == FormType::CustomFormPacket) {
        customFormPacketCallbacks[formId](player, data);
        customFormPacketCallbacks.erase(formId);
    } else if (formTypes[formId] == FormType::ModalFormPacket) {
        int32_t chosen = data == "true" ? 1 : 0;
        modalFormPacketCallbacks[formId](player, chosen);
        modalFormPacketCallbacks.erase(formId);
    }
    formTypes.erase(formId);
}
