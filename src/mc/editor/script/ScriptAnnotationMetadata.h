#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptAnnotationMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk11e1b5;
    ::ll::UntypedStorage<8, 16> mUnkfcd95f;
    ::ll::UntypedStorage<8, 8>  mUnke3f737;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAnnotationMetadata& operator=(ScriptAnnotationMetadata const&);
    ScriptAnnotationMetadata(ScriptAnnotationMetadata const&);
    ScriptAnnotationMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getDimension() const;

    MCNAPI ::std::string getId() const;

    MCNAPI ::std::string getName() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
