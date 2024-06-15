#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ValueWrapper {
public:
    // prevent constructor by default
    ValueWrapper& operator=(ValueWrapper const&);
    ValueWrapper(ValueWrapper const&);
    ValueWrapper();

public:
    // NOLINTBEGIN
    // symbol: ??1ValueWrapper@JSONObject@Bedrock@@QEAA@XZ
    MCAPI ~ValueWrapper();

    // symbol: ?emptyArray@ValueWrapper@JSONObject@Bedrock@@SA?AV123@XZ
    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyArray();

    // symbol: ?emptyObject@ValueWrapper@JSONObject@Bedrock@@SA?AV123@XZ
    MCAPI static class Bedrock::JSONObject::ValueWrapper emptyObject();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_moveConstruct@ValueWrapper@JSONObject@Bedrock@@AEAAX$$QEAV123@@Z
    MCAPI void _moveConstruct(class Bedrock::JSONObject::ValueWrapper&& other);

    // symbol: ?_createRaw@ValueWrapper@JSONObject@Bedrock@@CA?AV123@_J@Z
    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(int64 n);

    // symbol: ?_createRaw@ValueWrapper@JSONObject@Bedrock@@CA?AV123@_N@Z
    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(bool b);

    // symbol: ?_createRaw@ValueWrapper@JSONObject@Bedrock@@CA?AV123@N@Z
    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(double d);

    // symbol: ?_createRaw@ValueWrapper@JSONObject@Bedrock@@CA?AV123@PEBD_K_N@Z
    MCAPI static class Bedrock::JSONObject::ValueWrapper _createRaw(char const* s, uint64 length, bool copy);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
