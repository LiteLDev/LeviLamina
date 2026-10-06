#include "ll/core/tweak/PreserveInputLine.h"

#include "ll/api/base/ScopedValue.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/io/ConsoleOutputEvent.h"
#include <Windows.h>

namespace ll {
using namespace event;
struct PreserveInputLine::Impl {
    ll::event::ListenerPtr mOutputtingEvent;
    ll::event::ListenerPtr mOutputtedEvent;
    std::wstring           mInput;

    Impl() {
        auto& eventBus   = ll::event::EventBus::getInstance();
        mOutputtingEvent = eventBus.emplaceListener<event::ConsoleOutputtingEvent>([this](auto&) {
            auto                       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
            CONSOLE_SCREEN_BUFFER_INFO csbi{};
            if (!GetConsoleScreenBufferInfo(hOut, &csbi)) return;

            auto savedX = csbi.dwCursorPosition.X;
            auto savedY = csbi.dwCursorPosition.Y;

            mInput.clear();
            if (savedX > 0) {
                mInput.resize(savedX);
                DWORD read = 0;
                if (ReadConsoleOutputCharacterW(hOut, mInput.data(), savedX, COORD{0, savedY}, &read)) {
                    mInput.resize(read);
                } else {
                    mInput.clear();
                }
            }

            DWORD mWrite{0};
            SetConsoleCursorPosition(hOut, COORD{0, savedY});
            FillConsoleOutputCharacterW(hOut, L' ', csbi.dwSize.X, COORD{0, savedY}, &mWrite);
            FillConsoleOutputAttribute(hOut, csbi.wAttributes, csbi.dwSize.X, COORD{0, savedY}, &mWrite);
        });
        mOutputtedEvent  = eventBus.emplaceListener<event::ConsoleOutputtedEvent>([this](auto&) {
            auto                       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
            CONSOLE_SCREEN_BUFFER_INFO csbi{};
            if (!GetConsoleScreenBufferInfo(hOut, &csbi)) return;

            if (!mInput.empty()) {
                DWORD mWrite{0};
                WriteConsoleW(hOut, mInput.data(), static_cast<DWORD>(mInput.size()), &mWrite, nullptr);
            }
        });
    }

    ~Impl() {
        auto& bus = EventBus::getInstance();
        bus.removeListener(mOutputtingEvent);
        bus.removeListener(mOutputtedEvent);
    }
};
void PreserveInputLine::call(bool enabled) {
    if (enabled) {
        if (!impl) impl = std::make_unique<Impl>();
    } else {
        impl.reset();
    }
}
PreserveInputLine::PreserveInputLine()  = default;
PreserveInputLine::~PreserveInputLine() = default;
} // namespace ll
