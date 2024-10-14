#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
// clang-format on

namespace Scripting {

struct EnumBinding {
public:
    // EnumBinding inner types declare
    // clang-format off
    struct EnumValue;
    // clang-format on

    // EnumBinding inner types define
    struct EnumValue {
    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
        EnumValue(EnumValue const&);
        EnumValue();

    public:
        // NOLINTBEGIN
        MCAPI EnumValue(struct Scripting::EnumBinding::EnumValue&&);

        MCAPI ~EnumValue();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    EnumBinding& operator=(EnumBinding const&);

public:
    // NOLINTBEGIN
    MCAPI EnumBinding();

    MCAPI EnumBinding(struct Scripting::EnumBinding&&);

    MCAPI EnumBinding(struct Scripting::EnumBinding const&);

    MCAPI
    EnumBinding(std::string, entt::meta_type, bool, std::vector<struct Scripting::ConstantFactory>, std::vector<struct Scripting::EnumBinding::EnumValue>);

    MCAPI ~EnumBinding();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
