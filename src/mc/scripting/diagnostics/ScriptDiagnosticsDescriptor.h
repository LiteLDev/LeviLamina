#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ScriptDiagnosticsDescriptor& operator=(ScriptDiagnosticsDescriptor const&);
    ScriptDiagnosticsDescriptor(ScriptDiagnosticsDescriptor const&);
    ScriptDiagnosticsDescriptor();
};
