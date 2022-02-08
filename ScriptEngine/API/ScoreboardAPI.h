#pragma once
#include "APIHelp.h"


//////////////////// Classes ////////////////////
class Objective;
class ObjectiveClass : public ScriptClass
{
	std::string objname;
	bool isValid = false;
public:
	explicit ObjectiveClass(Objective* obj)
		:ScriptClass(ScriptClass::ConstructFromCpp<ObjectiveClass>{})
	{
		set(obj);
	}

	void set(Objective* obj);
	Objective* get();
	static Local<Object> newObjective(Objective* obj);
	Local<Value> getName();
	Local<Value> getDisplayName();
	Local<Value> setDisplay(const Arguments& args);
	Local<Value> setScore(const Arguments& args);
	Local<Value> addScore(const Arguments& args);
	Local<Value> reduceScore(const Arguments& args);
	Local<Value> deleteScore(const Arguments& args);
	Local<Value> getScore(const Arguments& args);
};
extern ClassDefine<ObjectiveClass> ObjectiveClassBuilder;