#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class GameContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk62ec0b;
    ::ll::UntypedStorage<8, 64> mUnkfd6f86;
    // NOLINTEND

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&);
    GameContext(GameContext const&);
    GameContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value getFileJson(::std::string const& filePath, ::std::string const& fileContents) const;

    MCNAPI ::Json::Value getFilepathJson(::std::string const& filePath) const;

    MCNAPI ::Json::Value getTutorialJson(::std::string const& tutorialPath) const;
    // NOLINTEND
};

} // namespace CodeBuilder
