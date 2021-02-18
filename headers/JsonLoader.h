#pragma once
#include<rapidjson/document.h>
#include<iostream>
#include<fstream>
#include<streambuf>
#include<string>
#include<vector>
#include<unordered_map>
#include<rapidjson/error/en.h>
using namespace std::string_literals;
using rapidjson::Document,std::string;
struct JsonReader {
	Document dc;
	JsonReader() {}
	JsonReader(const char* fn){
		read(fn);
	}
	Document& read(const char* fn) {
		std::ifstream ifs(fn);
		if (!ifs.is_open())
			throw string("bad file ") + fn;
		string v{ (std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>() };
		dc.Parse(v.c_str());
		if (dc.HasParseError()) {
			throw string("json err [") + rapidjson::GetParseError_En(dc.GetParseError()) + "] at " + std::to_string(dc.GetErrorOffset());
		}
		return dc;
	}
};
struct ConfigJReader {
	JsonReader jr;
	const char* fnn;
	ConfigJReader(const char* fn) : jr(fn),fnn(fn) {}
	void __parse(rapidjson::Value& val, double& v) {
		if (!val.IsDouble()) {
			throw "val needs to be double"s;
		}
		v = val.GetDouble();
	}
	void __parse(rapidjson::Value& val, long& v) {
		static_assert(sizeof(long) == 4);
		if (!val.IsInt()) {
			throw "val needs to be int"s;
		}
		v = val.GetInt();
	}
	void __parse(rapidjson::Value& val,bool& v) {
		if (!val.IsBool()) {
			throw "val needs to be bool"s;
		}
		v = val.GetBool();
	}
	void __parse(rapidjson::Value& val, int& v) {
		if (!val.IsInt()) {
			throw "val needs to be int"s;
		}
		v = val.GetInt();
	}
	void __parse(rapidjson::Value& val, string& v) {
		if (!val.IsString()) {
			throw "val needs to be string"s;
		}
		v = val.GetString();
	}
	template<typename TP>
	void __parse(rapidjson::Value& val, std::vector<TP>& v) {
		if (!val.IsArray()) {
			throw "val needs to be array"s;
		}
		auto ar = val.GetArray();
		for (auto& i : ar) {
			TP tmp;
			__parse(i, tmp);
			v.emplace_back(std::move(tmp));
		}
	}
	template <typename TP,typename TP2>
	void __parse(rapidjson::Value& val, std::unordered_map<TP2,TP>& v) {
		if (!val.IsObject()) {
			throw "val needs to be object"s;
		}
		auto ar = val.GetObject();
		for (auto& [k,va] : ar) {
			TP tmp;
			TP2 tmpkey;
			__parse(va, tmp);
			std::stringstream x{ k.GetString() };
			x >> tmpkey;
			v.emplace(std::move(tmpkey),std::move(tmp));
		}
	}
	template<typename TP>
	void __bind(string const& k, TP& v) {
		auto obj = jr.dc.GetObject();
		auto& val=obj[k.c_str()];
		try {
			__parse(val, v);
		}
		catch (string e) {
			throw "Json Error in ["s + fnn +"::"+ k+"] " + e;
		}
	}

	template<typename TP>
	void bind(string const& key,TP& v,TP&& def) {
		if (!jr.dc.IsObject())
			throw "Json need to be a Object "s + fnn;
		if (!jr.dc.HasMember(key.c_str())) {
			std::cerr << "Please specify " << key << " in " << fnn<<" (default value used)\n";
			v = std::forward<TP>(def);
		}
		else {
			__bind(key, v);
		}
	}
	template <typename TP>
	void bind(string const& key, TP& v) {
		if (!jr.dc.IsObject())
			throw "Json need to be a Object "s + fnn;
		if (!jr.dc.HasMember(key.c_str())) {
			throw "value "s + key + " required but not specfied in " + fnn;
		}
		__bind(key, v);
	}
	template <typename TP>
	void bind(TP& v) {
		__parse(jr.dc, v);
	}
	template <typename TP>
	void bind(TP& v,TP&& def) {
		try {
			__parse(jr.dc, v);
		}
		catch (string) {
			std::cerr << " default value used in " << fnn<<std::endl;
			v = std::forward<TP>(def);
		}
	}
};

