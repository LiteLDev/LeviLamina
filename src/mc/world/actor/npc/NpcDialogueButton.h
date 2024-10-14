#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueButton {
public:
    // prevent constructor by default
    NpcDialogueButton& operator=(NpcDialogueButton const&);
    NpcDialogueButton(NpcDialogueButton const&);

public:
    // NOLINTBEGIN
    MCAPI NpcDialogueButton();

    MCAPI ~NpcDialogueButton();

    MCAPI static struct NpcDialogueButton parse(class Json::Value const& root, std::string const& fileName, int);

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
