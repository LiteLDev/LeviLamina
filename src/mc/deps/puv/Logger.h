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
        ::ll::UntypedStorage<8, 24> mUnkb41697;
        ::ll::UntypedStorage<8, 32> mUnkd44d5c;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseLogEntry& operator=(ParseLogEntry const&);
        ParseLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ParseLogEntry(::Puv::Logger::ParseLogEntry const&);

        MCNAPI ~ParseLogEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Puv::Logger::ParseLogEntry const&);
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
        ::ll::UntypedStorage<8, 24> mUnk4f5fdc;
        ::ll::UntypedStorage<8, 24> mUnk89974d;
        ::ll::UntypedStorage<8, 32> mUnk615a04;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI UpgradeLogEntry(::Puv::Logger::UpgradeLogEntry const&);

        MCNAPI ~UpgradeLogEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Puv::Logger::UpgradeLogEntry const&);
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
        ::ll::UntypedStorage<8, 32> mUnkb040ef;
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
    ::ll::UntypedStorage<8, 24> mUnk2f69a4;
    ::ll::UntypedStorage<8, 24> mUnkb27419;
    ::ll::UntypedStorage<8, 24> mUnk9fdd72;
    ::ll::UntypedStorage<2, 2>  mUnka1ba32;
    ::ll::UntypedStorage<1, 1>  mUnk3c26f9;
    ::ll::UntypedStorage<1, 1>  mUnka0317f;
    ::ll::UntypedStorage<1, 1>  mUnkbcb18b;
    // NOLINTEND

public:
    // prevent constructor by default
    Logger& operator=(Logger const&);
    Logger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Logger(::Puv::Logger const&);

    MCNAPI explicit Logger(::cereal::ResultCode parseErrorCodes);

    MCNAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ParseLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ParseLogEntry>>>>>
    getParseLog(::cereal::ResultCode mask) const;

    MCNAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::UpgradeLogEntry>>>>>
    getUpgradeLog(::Puv::Logger::UpgradeResultCode mask) const;

    MCNAPI ::entt::iterable_adaptor<
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>,
        ::Puv::LoggerIterator<
            ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::Puv::Logger::ValidationLogEntry>>>>>
    getValidationLog(::Puv::Logger::ValidationResultCode mask) const;

    MCNAPI bool hasErrors() const;

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

    MCNAPI void merge(::Puv::Logger log);

    MCNAPI ::cereal::ResultCode parseErrorCodes() const;

    MCNAPI ::Puv::Logger::UpgradeResultCode upgradeErrorCodes() const;

    MCNAPI ::Puv::Logger::ValidationResultCode validationErrorCodes() const;

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
    MCNAPI void* $ctor(::Puv::Logger const&);

    MCNAPI void* $ctor(::cereal::ResultCode parseErrorCodes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
