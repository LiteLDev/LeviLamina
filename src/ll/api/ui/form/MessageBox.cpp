#include "ll/api/ui/form/MessageBox.h"

#include <utility>

#include "ll/core/ui/form/FormRuntime.h"
#include "ll/core/ui/form/MessageBoxModel.h"

namespace ll::ui {

struct MessageBox::Impl final : detail::FormRuntime {
    detail::MessageBoxModel model;
    bool                    prepared{false};

    Impl(Player& player, TextValue title)
    : FormRuntime(player, "minecraft:message_box", "message_box_data_"),
      model(std::move(title)) {}

    Expected<> prepare() try {
        if (prepared) {
            return {};
        }
        prepared = true;
        lockStructure();

        auto data = model.serialize();
        if (auto result = createProperty(data); !result) {
            abortPreparation();
            return result;
        }
        if (auto result = model.bind(*this); !result) {
            abortPreparation();
            return result;
        }
        return {};
    } catch (...) {
        abortPreparation();
        return makeExceptionError();
    }

    static coro::CoroTask<Result> awaitResult(std::shared_ptr<Impl> self) {
        auto result = co_await self->FormRuntime::showAsync();
        if (!result) {
            co_return forwardError(result.error());
        }
        co_return MessageBoxResult{result.value(), self->model.selection()};
    }
};

MessageBox::MessageBox(Player& player, TextValue title) : impl(std::make_shared<Impl>(player, std::move(title))) {}
MessageBox::~MessageBox()                                = default;
MessageBox::MessageBox(MessageBox&&) noexcept            = default;
MessageBox& MessageBox::operator=(MessageBox&&) noexcept = default;

MessageBox& MessageBox::body(TextValue value) {
    impl->ensureMutable();
    impl->model.body(std::move(value));
    return *this;
}

MessageBox& MessageBox::button1(TextValue label, std::optional<TextValue> tooltip) {
    impl->ensureMutable();
    impl->model.button1(std::move(label), std::move(tooltip));
    return *this;
}

MessageBox& MessageBox::button2(TextValue label, std::optional<TextValue> tooltip) {
    impl->ensureMutable();
    impl->model.button2(std::move(label), std::move(tooltip));
    return *this;
}

Expected<> MessageBox::show(Callback callback) {
    if (auto result = impl->prepare(); !result) {
        return result;
    }
    auto* model = &impl->model;
    return impl->show([model, callback = std::move(callback)](ScreenSession::Result result) mutable {
        if (!callback) {
            return;
        }
        if (!result) {
            callback(forwardError(result.error()));
            return;
        }
        callback(MessageBoxResult{result.value(), model->selection()});
    });
}

coro::CoroTask<MessageBox::Result> MessageBox::showAsync() {
    if (auto result = impl->prepare(); !result) {
        return [](Unexpected error) -> coro::CoroTask<Result> {
            co_return std::move(error);
        }(forwardError(result.error()));
    }
    return Impl::awaitResult(impl);
}

Expected<> MessageBox::close() { return impl->close(); }

bool MessageBox::isShowing() const noexcept { return impl && impl->isShowing(); }

} // namespace ll::ui
