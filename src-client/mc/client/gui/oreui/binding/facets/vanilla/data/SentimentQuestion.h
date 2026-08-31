#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SentimentQuestionData;
namespace OreUI { struct SentimentOption; }
// clang-format on

namespace OreUI {

struct SentimentQuestion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SentimentOption>> mOptions;
    ::ll::TypedStorage<1, 1, bool>                                     mSubmitted;
    // NOLINTEND

public:
    // prevent constructor by default
    SentimentQuestion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SentimentQuestion(::SentimentQuestionData const& item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SentimentQuestionData const& item);
    // NOLINTEND
};

} // namespace OreUI
