#pragma once

#include "liteloader/api/base/StdInt.h"
#include "liteloader/api/form/CustomForm.h"
#include "liteloader/api/form/FormBase.h"
#include "liteloader/api/form/SimpleForm.h"
#include "mc/world/actor/player/Player.h"
#include <liteloader/api/form/ModalForm.h>

namespace ll::form::handler {

class FormHandler {

public:
    virtual void                   handle(Player& player, const std::string& data) const = 0;
    [[nodiscard]] virtual FormType getType() const                                       = 0;
};

class SimpleFormHandler : public FormHandler {
public:
    SimpleForm::Callback                    mCallback;
    std::vector<SimpleForm::ButtonCallback> mButtonCallbacks;

    SimpleFormHandler(SimpleForm::Callback callback, std::vector<SimpleForm::ButtonCallback> buttonCallbacks)
    : mCallback(std::move(callback)), mButtonCallbacks(std::move(buttonCallbacks)) {}

    void                   handle(Player& player, const std::string& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }
};


class CustomFormHandler : public FormHandler {
public:
    CustomForm::Callback                            mCallback;
    std::vector<std::shared_ptr<CustomFormElement>> mFormElements;

    CustomFormHandler(CustomForm::Callback callback, std::vector<std::shared_ptr<CustomFormElement>> formElements)
    : mCallback(std::move(callback)), mFormElements(std::move(formElements)) {}

    void                   handle(Player& player, const std::string& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }
};

class ModalFormHandler : public FormHandler {
public:
    ModalForm::Callback mCallback;

    explicit ModalFormHandler(ModalForm::Callback callback) : mCallback(std::move(callback)) {}

    void                   handle(Player& player, const std::string& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }
};

uint addFormHandler(std::unique_ptr<FormHandler>&& data);

void handleFormPacket(Player* player, uint formId, const std::string& data);

} // namespace ll::form::handler