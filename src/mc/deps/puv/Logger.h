#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/puv/LoggerIterator.h"

namespace Puv {

class Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct ParseLogEntry;
    struct UpgradeLogEntry;
    struct ValidationLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode : uchar {
        // bitfield representation
        UnsupportedVersion = 1 << 0,
        SrcError           = 1 << 1,
        DstError           = 1 << 2,
        InternalError      = 1 << 3,
        CopyError          = 1 << 4,
        EnttEnumAsBitmask  = 255,
        All                = 255,
    };

    enum class ValidationResultCode : uchar {
        Warning           = 1,
        Error             = 2,
        All               = 255,
        EnttEnumAsBitmask = 255,
    };

    struct ParseLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>  mUnk3e9543;
        ::ll::UntypedStorage<8, 24> mUnk51254a;
        ::ll::UntypedStorage<8, 32> mUnk448aaf;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseLogEntry& operator=(ParseLogEntry const&);
        ParseLogEntry(ParseLogEntry const&);
        ParseLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParseLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct UpgradeLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkecd095;
        ::ll::UntypedStorage<8, 24> mUnk70d724;
        ::ll::UntypedStorage<8, 24> mUnk6f2eb0;
        ::ll::UntypedStorage<8, 32> mUnkd94ab9;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UpgradeLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ValidationLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkfab5d3;
        ::ll::UntypedStorage<8, 32> mUnka4294f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValidationLogEntry& operator=(ValidationLogEntry const&);
        ValidationLogEntry(ValidationLogEntry const&);
        ValidationLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidationLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6de64c;
    ::ll::UntypedStorage<8, 24> mUnk2f2a6c;
    ::ll::UntypedStorage<8, 24> mUnkbfc3b7;
    ::ll::UntypedStorage<1, 1>  mUnkbcb18b;
    // NOLINTEND

public:
    // prevent constructor by default
    Logger& operator=(Logger const&);
    Logger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Logger(::Puv::Logger&&);

    MCNAPI Logger(::Puv::Logger const&);

    MCNAPI ::Puv::Logger& log(::Puv::Logger::ValidationResultCode res, ::std::string msg);

    MCNAPI ::Puv::Logger&
    log(::cereal::ResultCode                                                                     res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> path,
        ::std::string                                                                            msg);

    MCNAPI ::Puv::Logger&
    log(::Puv::Logger::UpgradeResultCode                                                         res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> src,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> dst,
        ::std::string                                                                            msg);

    MCNAPI ::Puv::Logger& operator=(::Puv::Logger&&);

    MCNAPI ~Logger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string contextString(
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> const& contextStack
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::Logger&&);

    MCNAPI void* $ctor(::Puv::Logger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
