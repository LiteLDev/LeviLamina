#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/puv/LoggerIterator.h"

namespace Puv {

class Logger {
public:
    // Logger inner types declare
    // clang-format off
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

    struct UpgradeLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkecd095;
        ::ll::UntypedStorage<8, 24> mUnk553dcb;
        ::ll::UntypedStorage<8, 24> mUnk2c9630;
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
        MCAPI ~UpgradeLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    enum class ValidationResultCode : uchar {
        Warning           = 1,
        Error             = 2,
        All               = 255,
        EnttEnumAsBitmask = 255,
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
        MCAPI ~ValidationLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk168e35;
    ::ll::UntypedStorage<8, 24> mUnk2f2a6c;
    ::ll::UntypedStorage<8, 24> mUnkbfc3b7;
    ::ll::UntypedStorage<1, 1>  mUnkbcb18b;
    // NOLINTEND

public:
    // prevent constructor by default
    Logger& operator=(Logger const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Logger();

    MCAPI Logger(::Puv::Logger const&);

    MCAPI Logger(::Puv::Logger&&);

    MCAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<::std::_Vector_const_iterator<
            ::std::_Vector_val<::std::_Simple_types<::cereal::SerializerContext::LogEntry>>>>,
        ::Puv::LoggerIterator<::std::_Vector_const_iterator<
            ::std::_Vector_val<::std::_Simple_types<::cereal::SerializerContext::LogEntry>>>>>
    getParseLog(::cereal::ResultCode mask) const;

    MCAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>>
    getUpgradeLog(::Puv::Logger::UpgradeResultCode mask) const;

    MCAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>>
    getValidationLog(::Puv::Logger::ValidationResultCode mask) const;

    MCFOLD bool hasErrors() const;

    MCAPI ::Puv::Logger& log(::Puv::Logger::ValidationResultCode res, ::std::string msg);

    MCAPI ::Puv::Logger&
    log(::cereal::ResultCode                                                                res,
        ::std::vector<::std::pair<::cereal::SerializerContext::ContextType, ::std::string>> path,
        ::std::string                                                                       msg);

    MCAPI ::Puv::Logger&
    log(::Puv::Logger::UpgradeResultCode                                                    res,
        ::std::vector<::std::pair<::cereal::SerializerContext::ContextType, ::std::string>> src,
        ::std::vector<::std::pair<::cereal::SerializerContext::ContextType, ::std::string>> dst,
        ::std::string                                                                       msg);

    MCAPI void merge(::Puv::Logger log);

    MCAPI ::Puv::Logger& operator=(::Puv::Logger&&);

    MCAPI ~Logger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Puv::Logger const&);

    MCAPI void* $ctor(::Puv::Logger&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
