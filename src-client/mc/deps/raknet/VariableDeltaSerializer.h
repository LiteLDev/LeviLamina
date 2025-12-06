#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class VariableDeltaSerializer {
public:
    // VariableDeltaSerializer inner types declare
    // clang-format off
    struct ChangedVariablesList;
    struct DeserializationContext;
    struct RemoteSystemVariableHistory;
    struct SerializationContext;
    // clang-format on

    // VariableDeltaSerializer inner types define
    struct RemoteSystemVariableHistory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke5f75a;
        ::ll::UntypedStorage<8, 24> mUnka949fe;
        ::ll::UntypedStorage<8, 16> mUnk3fa945;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoteSystemVariableHistory& operator=(RemoteSystemVariableHistory const&);
        RemoteSystemVariableHistory(RemoteSystemVariableHistory const&);
        RemoteSystemVariableHistory();
    };

    struct ChangedVariablesList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk34ae0b;
        ::ll::UntypedStorage<2, 2>  mUnk935bb4;
        ::ll::UntypedStorage<1, 56> mUnk1e20ff;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChangedVariablesList& operator=(ChangedVariablesList const&);
        ChangedVariablesList(ChangedVariablesList const&);
        ChangedVariablesList();
    };

    struct SerializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk6a0c80;
        ::ll::UntypedStorage<8, 8>  mUnk46a485;
        ::ll::UntypedStorage<4, 4>  mUnk9533de;
        ::ll::UntypedStorage<8, 8>  mUnk1937a5;
        ::ll::UntypedStorage<8, 8>  mUnk83e854;
        ::ll::UntypedStorage<8, 8>  mUnk117ee0;
        ::ll::UntypedStorage<8, 8>  mUnkb16c84;
        ::ll::UntypedStorage<4, 4>  mUnkf4bcfa;
        ::ll::UntypedStorage<4, 4>  mUnkf4b2de;
        ::ll::UntypedStorage<1, 1>  mUnk91dc99;
        ::ll::UntypedStorage<1, 1>  mUnk9d9f95;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializationContext& operator=(SerializationContext const&);
        SerializationContext(SerializationContext const&);
        SerializationContext();
    };

    struct DeserializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkde12c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeserializationContext& operator=(DeserializationContext const&);
        DeserializationContext(DeserializationContext const&);
        DeserializationContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk3f861a;
    ::ll::UntypedStorage<8, 32>  mUnkf4328f;
    ::ll::UntypedStorage<1, 1>   mUnkad9ada;
    ::ll::UntypedStorage<8, 288> mUnk94bf87;
    // NOLINTEND

public:
    // prevent constructor by default
    VariableDeltaSerializer& operator=(VariableDeltaSerializer const&);
    VariableDeltaSerializer(VariableDeltaSerializer const&);
    VariableDeltaSerializer();
};

} // namespace RakNet
