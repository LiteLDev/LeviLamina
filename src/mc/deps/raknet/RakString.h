#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {
    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&);
        SharedString(SharedString const&);
        SharedString();
    };

public:
    // NOLINTBEGIN
    MCAPI bool Deserialize(class RakNet::BitStream* bs);

    MCAPI uint64 GetLength() const;

    MCAPI bool IPAddressMatch(char const* IP);

    MCAPI bool IsEmpty() const;

    MCAPI RakString();

    MCAPI RakString(class RakNet::RakString const& rhs);

    MCAPI RakString(char const*, ...);

    MCAPI class RakNet::RakString& operator=(char* str);

    MCAPI class RakNet::RakString& operator=(char const* str);

    MCAPI class RakNet::RakString& operator=(class RakNet::RakString const& rhs);

    MCAPI bool operator==(class RakNet::RakString const& rhs) const;

    MCAPI ~RakString();

    MCAPI static void FreeMemoryNoMutex();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void Allocate(uint64 len);

    MCAPI void Assign(char const* str);

    MCAPI void Assign(char const*, char*);

    MCAPI void Free();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static struct RakNet::RakString::SharedString& emptyString();

    MCAPI static class DataStructures::List<struct RakNet::RakString::SharedString*>& freeList();

    // NOLINTEND
};

}; // namespace RakNet
