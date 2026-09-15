#pragma once

#include <cstdint>
#include <memory>
#include <typeindex>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/SessionView.h"

namespace ll::protocol {

namespace detail {
class ProtocolSession;
struct SessionAccess;
} // namespace detail

class Session {
    std::weak_ptr<detail::ProtocolSession> mSession;
    std::uint64_t                          mGeneration{};

    Session(std::weak_ptr<detail::ProtocolSession> session, std::uint64_t generation) noexcept;
    LLAPI Expected<> sendErased(std::type_index type, void const* payload) const noexcept;

    friend struct detail::SessionAccess;

public:
    Session() noexcept = default;

    LLNDAPI explicit    operator bool() const;
    LLNDAPI bool        active() const;
    LLNDAPI SessionView view() const noexcept;

#ifdef LL_PLAT_C
    template <class T>
    Expected<> sendToServer(T const& payload) const noexcept {
        return sendErased(typeid(T), &payload);
    }
#elifdef LL_PLAT_S
    template <class T>
    Expected<> send(T const& payload) const noexcept {
        return sendErased(typeid(T), &payload);
    }
#endif
};

} // namespace ll::protocol
