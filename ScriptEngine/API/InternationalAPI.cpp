#include "InternationalAPI.h"
#include <I18nAPI.h>

ClassDefine<I18nClass> I18nClassBuilder =
    defineClass<I18nClass>("i18n")
        .constructor(nullptr)
        .function("tr", &I18nClass::_tr)
        .function("load", &I18nClass::_load)
        .build();


Local<Value> I18nClass::_tr(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        return String::newString(tr(args[0].toStr()));
    }
    CATCH("Fail in translate!")
}

Local<Value> I18nClass::_load(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Translation::load(args[0].toStr());
        return Local<Value>();
    }
    CATCH("Fail in Translation::load!")
}
