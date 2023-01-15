#include "api/APIHelp.h"
#include <llapi/mc/Scoreboard.hpp>
#include <llapi/mc/Objective.hpp>
#include <llapi/mc/Player.hpp>
#include "api/ScoreboardAPI.h"
#include "api/McAPI.h"
#include "api/PlayerAPI.h"
#include <optional>
using namespace std;

//////////////////// Class Definition ////////////////////

ClassDefine<ObjectiveClass> ObjectiveClassBuilder =
    defineClass<ObjectiveClass>("LLSE_Objective")
        .constructor(nullptr)
        .instanceProperty("name", &ObjectiveClass::getName)
        .instanceProperty("displayName", &ObjectiveClass::getDisplayName)

        .instanceFunction("setDisplay", &ObjectiveClass::setDisplay)
        .instanceFunction("setScore", &ObjectiveClass::setScore)
        .instanceFunction("addScore", &ObjectiveClass::addScore)
        .instanceFunction("reduceScore", &ObjectiveClass::reduceScore)
        .instanceFunction("deleteScore", &ObjectiveClass::deleteScore)
        .instanceFunction("getScore", &ObjectiveClass::getScore)
        .build();


//////////////////// Classes ////////////////////

Local<Object> ObjectiveClass::newObjective(Objective* obj) {
    auto newp = new ObjectiveClass(obj);
    return newp->getScriptObject();
}

void ObjectiveClass::set(Objective* obj) {
    if (obj) {
        objname = obj->getName();
        isValid = true;
    }
}

Objective* ObjectiveClass::get() {
    if (isValid)
        return ::Global<Scoreboard>->getObjective(objname);
    return nullptr;
}

Local<Value> ObjectiveClass::getName() {
    try {
        return String::newString(objname);
    }
    CATCH("Fail in getName!")
}

Local<Value> ObjectiveClass::getDisplayName() {
    try {
        Objective* obj = get();
        if (!obj)
            return Local<Value>();
        return String::newString(obj->getDisplayName());
    }
    CATCH("Fail in getDisplayName!")
}

Local<Value> ObjectiveClass::setDisplay(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() == 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        Objective* obj = get();
        if (!obj)
            return Local<Value>();

        string slot = args[0].toStr();
        int sort = 0;
        if (args.size() == 2)
            sort = args[1].toInt();

        return Boolean::newBoolean(obj->setDisplay(slot, (ObjectiveSortOrder)sort));
    }
    CATCH("Fail in setDisplay");
}

Local<Value> ObjectiveClass::setScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        int score = args[1].toInt();
        Local<Value> rtn;

        string id;
        if (args[0].isString()) {
            string id = args[0].toStr();
            std::optional<int> res = Scoreboard::setScore(objname, id, score);
            if (res)
                rtn = Number::newNumber(*res);
        } else if (IsInstanceOf<PlayerClass>(args[0])) {
            auto pl = PlayerClass::extract(args[0]);
            if (Scoreboard::setScore(pl, objname, score))
                rtn = Number::newNumber(Scoreboard::getScore(pl, objname));
        } else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        return rtn;
    }
    CATCH("Fail in setScore");
}

Local<Value> ObjectiveClass::addScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        int score = args[1].toInt();
        Local<Value> rtn;

        string id;
        if (args[0].isString()) {
            id = args[0].toStr();
            std::optional<int> res = Scoreboard::addScore(objname, id, score);
            if (res)
                rtn = Number::newNumber(*res);
        } else if (IsInstanceOf<PlayerClass>(args[0])) {
            auto pl = PlayerClass::extract(args[0]);
            if (Scoreboard::addScore(pl, objname, score))
                rtn = Number::newNumber(Scoreboard::getScore(pl, objname));
        } else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        return rtn;
    }
    CATCH("Fail in addScore");
}

Local<Value> ObjectiveClass::reduceScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)

    try {
        int score = args[1].toInt();
        Local<Value> rtn;

        string id;
        if (args[0].isString()) {
            string id = args[0].toStr();
            std::optional<int> res = Scoreboard::reduceScore(objname, id, score);
            if (res)
                rtn = Number::newNumber(*res);
        } else if (IsInstanceOf<PlayerClass>(args[0])) {
            auto pl = PlayerClass::extract(args[0]);
            if (Scoreboard::reduceScore(pl, objname, score))
                rtn = Number::newNumber(Scoreboard::getScore(pl, objname));
        } else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        return rtn;
    }
    CATCH("Fail in removeScore");
}

Local<Value> ObjectiveClass::deleteScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        bool res = false;
        string id;
        if (args[0].isString())
            res = Scoreboard::removeFromObjective(objname, id);
        else if (IsInstanceOf<PlayerClass>(args[0]))
            res = Scoreboard::removeFromObjective(objname, PlayerClass::extract(args[0]));
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        return Boolean::newBoolean(res);
    }
    CATCH("Fail in deleteScore");
}

Local<Value> ObjectiveClass::getScore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        int res = 0;
        if (args[0].isString())
            res = Scoreboard::getScore(objname, args[0].toStr());
        else if (IsInstanceOf<PlayerClass>(args[0]))
            res = Scoreboard::getScore(PlayerClass::extract(args[0]), objname);
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        return Number::newNumber(res);
    }
    CATCH("Fail in getScore");
}

//////////////////// APIs ////////////////////

Local<Value> McClass::getDisplayObjective(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        string slot = args[0].toStr();
        auto res = ::Global<Scoreboard>->getDisplayObjective(slot);

        if (!res)
            return Local<Value>();
        return ObjectiveClass::newObjective((Objective*)res);
    }
    CATCH("Fail in GetDisplayObjective");
}

Local<Value> McClass::clearDisplayObjective(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        string slot = args[0].toStr();
        auto res = ::Global<Scoreboard>->clearDisplayObjective(slot);

        if (!res)
            return Local<Value>();
        return ObjectiveClass::newObjective(res);
    }
    CATCH("Fail in ClearDisplayObjective");
}

Local<Value> McClass::getScoreObjective(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        string name = args[0].toStr();
        auto res = ::Global<Scoreboard>->getObjective(name);

        if (!res)
            return Local<Value>();
        return ObjectiveClass::newObjective(res);
    }
    CATCH("Fail in GetScoreObjective");
}

Local<Value> McClass::newScoreObjective(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    if (args.size() >= 2)
        CHECK_ARG_TYPE(args[1], ValueKind::kString)

    try {
        string name = args[0].toStr();
        string display = name;
        if (args.size() >= 2)
            display = args[1].toStr();

        auto obj = Scoreboard::newObjective(name, display);
        return obj ? ObjectiveClass::newObjective(obj) : Local<Value>();
    }
    CATCH("Fail in NewScoreObjective!")
}

Local<Value> McClass::removeScoreObjective(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        string name = args[0].toStr();
        auto obj = ::Global<Scoreboard>->getObjective(name);
        if (obj) {
            ::Global<Scoreboard>->removeObjective(obj);
            return Boolean::newBoolean(true);
        }
        return Boolean::newBoolean(false);
    }
    CATCH("Fail in RemoveScoreObjective!")
}

Local<Value> McClass::getAllScoreObjectives(const Arguments& args) {
    try {
        Local<Array> res = Array::newArray();

        auto objs = ::Global<Scoreboard>->getObjectives();
        for (auto& obj : objs) {
            if (obj)
                res.add(ObjectiveClass::newObjective((Objective*)obj));
        }
        return res;
    }
    CATCH("Fail in GetAllScoreObjectives!")
}