#include <FormAPI.h>
#include <memory>
#include "third-party/Nlohmann/fifo_json.hpp"
#include <MC/ServerPlayer.hpp>
using namespace std;

namespace Form
{
//////////////////////////////// Simple Form ////////////////////////////////
	string Button::serialize()
	{
		fifo_json button;
		button["text"] = text;
		if (!image.empty())
		{
			fifo_json imageObj;
			imageObj["type"] = image.find("textures/") == 0 ? "path" : "url";
			imageObj["data"] = image;
			button["image"] = imageObj;
		}
		return button.dump();
	}

	SimpleForm& SimpleForm::append(const Button& element)
	{
		elements.emplace_back(make_unique<Button>(element));
		return *this;
	}

	string SimpleForm::serialize()
	{
		fifo_json form = fifo_json::parse(R"({"title":"","content":"","buttons":[],"type":"form"})");
		form["title"] = title;
		form["content"] = content;
		for (auto& e : elements)
			form["buttons"].push_back(fifo_json::parse(e->serialize()));
		return form.dump();
	}

	bool SimpleForm::sendTo(ServerPlayer* player, Callback callback)
	{
		
		return false;
	}

//////////////////////////////// Custom Form ////////////////////////////////
	string Label::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "label";
		itemAdd["text"] = text;
		return itemAdd.dump();
	}

	string Input::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "input";
		itemAdd["text"] = title;
		if(!placeholder.empty())
			itemAdd["placeholder"] = placeholder;
		if(!def.empty())
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Toggle::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "toggle";
		itemAdd["text"] = title;
		if (def)
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Dropdown::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "dropdown";
		itemAdd["text"] = title;

		fifo_json items = fifo_json::array();
		for (auto& str : options)
			items.push_back(str);
		itemAdd["options"] = items;

		if (def > 0)
			itemAdd["default"] = def;
		return itemAdd.dump();
	}

	string Slider::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "slider";
		itemAdd["text"] = title;

		if (min >= max)
			max = min + 1;
		itemAdd["min"] = min;
		itemAdd["max"] = max;
		itemAdd["step"] = step >= 1 ? step : 1;
		if (def > 0 && min <= def && max >= def)
		{
			itemAdd["default"] = def;
		}
		return itemAdd.dump();
	}

	string StepSlider::serialize()
	{
		fifo_json itemAdd;
		itemAdd["type"] = "step_slider";
		itemAdd["text"] = title;
		
		fifo_json items = fifo_json::array();
		for (auto& str : options)
			items.push_back(str);
		itemAdd["steps"] = items;

		int maxIndex = items.size()-1;
		if (def >= 0 && def <= maxIndex)
		{
			itemAdd["default"] = def;
		}
		return itemAdd.dump();
	}

	CustomForm& CustomForm::append(const Label& element)
	{
		elements.emplace_back(make_unique<Label>(element));
		return *this;
	}

	CustomForm& CustomForm::append(const Input& element)
	{
		elements.emplace_back(make_unique<Input>(element));
		return *this;
	}

	CustomForm& CustomForm::append(const Toggle& element)
	{
		elements.emplace_back(make_unique<Toggle>(element));
		return *this;
	}

	CustomForm& CustomForm::append(const Dropdown& element)
	{
		elements.emplace_back(make_unique<Dropdown>(element));
		return *this;
	}

	CustomForm& CustomForm::append(const Slider& element)
	{
		elements.emplace_back(make_unique<Slider>(element));
		return *this;
	}

	CustomForm& CustomForm::append(const StepSlider& element)
	{
		elements.emplace_back(make_unique<StepSlider>(element));
		return *this;
	}

	string CustomForm::serialize()
	{
		fifo_json form = fifo_json::parse(R"({ "title":"", "type":"custom_form", "content":[], "buttons":[] })");
		form["title"] = title;
		for (auto& e : elements)
			form["content"].push_back(fifo_json::parse(e->serialize()));
		return form.dump();
	}

	bool CustomForm::sendTo(ServerPlayer* player, Callback callback)
	{

		return false;
	}
}