#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/core/form/CustomFormElement.h"
#include "ll/api/form/FormBase.h"
#include "ll/api/form/ModalForm.h"
#include "ll/api/form/SimpleForm.h"
#include "mc/world/actor/player/Player.h"

namespace ll::form::handler {

class FormHandler {

public:
    virtual void                   handle(Player& player, std::string const& data) const = 0;
    [[nodiscard]] virtual FormType getType() const                                       = 0;
};

class SimpleFormHandler : public FormHandler {
public:
    SimpleForm::Callback                    mCallback;
    std::vector<SimpleForm::ButtonCallback> mButtonCallbacks;

    SimpleFormHandler(SimpleForm::Callback callback, std::vector<SimpleForm::ButtonCallback> buttonCallbacks)
    : mCallback(std::move(callback)),
      mButtonCallbacks(std::move(buttonCallbacks)) {}

    void                   handle(Player& player, std::string const& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::SimpleForm; }
};

class CustomFormHandler : public FormHandler {
public:
    CustomForm::Callback                            mCallback;
    std::vector<std::shared_ptr<CustomFormElement>> mFormElements;

    CustomFormHandler(CustomForm::Callback callback, std::vector<std::shared_ptr<CustomFormElement>> formElements)
    : mCallback(std::move(callback)),
      mFormElements(std::move(formElements)) {}

    void                   handle(Player& player, std::string const& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }
};

class ModalFormHandler : public FormHandler {
public:
    ModalForm::Callback mCallback;

    explicit ModalFormHandler(ModalForm::Callback callback) : mCallback(std::move(callback)) {}

    void                   handle(Player& player, std::string const& data) const override;
    [[nodiscard]] FormType getType() const override { return FormType::ModalForm; }
};

uint addFormHandler(std::unique_ptr<FormHandler>&& data);

void handleFormPacket(Player& player, uint formId, std::string const& data);

} // namespace ll::form::handler