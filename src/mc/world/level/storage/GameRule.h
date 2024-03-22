#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on

    // GameRule inner types define
    enum class Type : schar {
        Invalid = 0,
        Bool    = 1,
        Int     = 2,
        Float   = 3,
    };

    union Value {
        bool  boolVal;  // this+0x0
        int   intVal;   // this+0x0
        float floatVal; // this+0x0
    };

    class ValidationError {
    public:
        bool                     mSuccess;
        std::string              mErrorDescription;
        std::vector<std::string> mErrorParameters;

    public:
        // NOLINTBEGIN
        // symbol: ??1ValidationError@GameRule@@QEAA@XZ
        MCAPI ~ValidationError();

        // NOLINTEND
    };

    using TagDataNotFoundCallback = std::function<void(GameRule&)>;
    using ValidateValueCallback   = std::function<bool(GameRule::Value const&, GameRule::ValidationError*)>;

    bool                    mShouldSave;            // this+0x0
    GameRule::Type          mType;                  // this+0x1
    GameRule::Value         mValue;                 // this+0x4
    std::string             mName;                  // this+0x8
    bool                    mAllowUseInCommand;     // this+0x28
    bool                    mIsDefaultSet;          // this+0x29
    bool                    mRequiresCheats;        // this+0x2A
    bool                    mCanBeModifiedByPlayer; // this+0x2B
    TagDataNotFoundCallback mTagNotFoundCallback;   // this+0x30
    ValidateValueCallback   mValidateValueCallback; // this+0x70

public:
    // prevent constructor by default
    GameRule();

public:
    // NOLINTBEGIN
    // symbol: ??0GameRule@@QEAA@$$QEAV0@@Z
    MCAPI GameRule(class GameRule&&);

    // symbol: ??0GameRule@@QEAA@AEBV0@@Z
    MCAPI GameRule(class GameRule const&);

    // symbol: ??0GameRule@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI GameRule(std::string const& name, bool);

    // symbol: ?allowUseInCommand@GameRule@@QEBA_NXZ
    MCAPI bool allowUseInCommand() const;

    // symbol: ?allowUseInScripting@GameRule@@QEBA_NXZ
    MCAPI bool allowUseInScripting() const;

    // symbol: ?canBeModifiedByPlayer@GameRule@@QEBA_NXZ
    MCAPI bool canBeModifiedByPlayer() const;

    // symbol: ?getBool@GameRule@@QEBA_NXZ
    MCAPI bool getBool() const;

    // symbol: ?getFloat@GameRule@@QEBAMXZ
    MCAPI float getFloat() const;

    // symbol: ?getInt@GameRule@@QEBAHXZ
    MCAPI int getInt() const;

    // symbol: ?getLowercaseName@GameRule@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getLowercaseName() const;

    // symbol: ?getName@GameRule@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getType@GameRule@@QEBA?AW4Type@1@XZ
    MCAPI ::GameRule::Type getType() const;

    // symbol: ?getValue@GameRule@@QEBAAEBTValue@1@XZ
    MCAPI union GameRule::Value const& getValue() const;

    // symbol: ??4GameRule@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class GameRule& operator=(class GameRule&&);

    // symbol: ??4GameRule@@QEAAAEAV0@AEBV0@@Z
    MCAPI class GameRule& operator=(class GameRule const&);

    // symbol: ?requiresCheats@GameRule@@QEBA_NXZ
    MCAPI bool requiresCheats() const;

    // symbol: ?resetType@GameRule@@QEAAXW4Type@1@@Z
    MCAPI void resetType(::GameRule::Type type);

    // symbol: ?setBool@GameRule@@QEAA_N_NPEA_NPEAVValidationError@1@@Z
    MCAPI bool setBool(bool value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    // symbol: ?setFloat@GameRule@@QEAA_NMPEA_NPEAVValidationError@1@@Z
    MCAPI bool setFloat(float value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    // symbol: ?setInt@GameRule@@QEAA_NHPEA_NPEAVValidationError@1@@Z
    MCAPI bool setInt(int value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    // symbol: ?setTagDataNotFoundCallback@GameRule@@QEAAAEAV1@V?$function@$$A6AXAEAVGameRule@@@Z@std@@@Z
    MCAPI class GameRule& setTagDataNotFoundCallback(TagDataNotFoundCallback cb);

    // symbol:
    // ?setValidateValueCallback@GameRule@@QEAAAEAV1@V?$function@$$A6A_NAEBTValue@GameRule@@PEAVValidationError@2@@Z@std@@@Z
    MCAPI class GameRule& setValidateValueCallback(ValidateValueCallback cb);

    // symbol: ??1GameRule@@QEAA@XZ
    MCAPI ~GameRule();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setDefaultValue@GameRule@@IEAAAEAV1@_N@Z
    MCAPI class GameRule& _setDefaultValue(bool b);

    // symbol: ?_setDefaultValue@GameRule@@IEAAAEAV1@H@Z
    MCAPI class GameRule& _setDefaultValue(int i);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_set@GameRule@@AEAA_NAEBTValue@1@PEA_NPEAVValidationError@1@@Z
    MCAPI bool _set(union GameRule::Value const& v, bool* pValidated, class GameRule::ValidationError* errorOutput);

    // NOLINTEND
};
