#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SentimentOptionData;
// clang-format on

namespace OreUI {

struct SentimentOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SentimentOption(::SentimentOptionData const& option);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SentimentOptionData const& option);
    // NOLINTEND
};

} // namespace OreUI
