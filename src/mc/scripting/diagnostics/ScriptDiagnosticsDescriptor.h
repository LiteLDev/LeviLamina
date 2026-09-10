#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDiagnosticsDescriptor {
public:
    // ScriptDiagnosticsDescriptor inner types define
    enum class DataSource : uint {
        Server       = 0,
        Client       = 1,
        ServerScript = 2,
    };

    enum class DisplayType : uint {
        LineChart              = 0,
        StackedLineChart       = 1,
        StackedBarChart        = 2,
        Table                  = 3,
        MultiColumnTable       = 4,
        DynamicPropertiesTable = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3a81ad;
    ::ll::UntypedStorage<8, 32> mUnk177d2e;
    ::ll::UntypedStorage<4, 4>  mUnk95993a;
    ::ll::UntypedStorage<4, 4>  mUnk48b654;
    ::ll::UntypedStorage<8, 40> mUnk81c8b3;
    ::ll::UntypedStorage<8, 40> mUnk5af1dd;
    ::ll::UntypedStorage<4, 8>  mUnk38d266;
    ::ll::UntypedStorage<8, 16> mUnk2557ad;
    ::ll::UntypedStorage<8, 16> mUnkbf63e9;
    ::ll::UntypedStorage<8, 40> mUnkc7e113;
    ::ll::UntypedStorage<8, 32> mUnk15b36a;
    ::ll::UntypedStorage<8, 40> mUnk76041c;
    ::ll::UntypedStorage<8, 32> mUnkea703c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDiagnosticsDescriptor(::ScriptDiagnosticsDescriptor&&);

    MCNAPI ScriptDiagnosticsDescriptor(::ScriptDiagnosticsDescriptor const&);

    MCNAPI ScriptDiagnosticsDescriptor(
        ::std::string                              name,
        ::std::string                              statGroupId,
        ::ScriptDiagnosticsDescriptor::DataSource  dataSource,
        ::ScriptDiagnosticsDescriptor::DisplayType displayType
    );

    MCNAPI ::ScriptDiagnosticsDescriptor& operator=(::ScriptDiagnosticsDescriptor const&);

    MCNAPI ~ScriptDiagnosticsDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDiagnosticsDescriptor&&);

    MCNAPI void* $ctor(::ScriptDiagnosticsDescriptor const&);

    MCNAPI void* $ctor(
        ::std::string                              name,
        ::std::string                              statGroupId,
        ::ScriptDiagnosticsDescriptor::DataSource  dataSource,
        ::ScriptDiagnosticsDescriptor::DisplayType displayType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
