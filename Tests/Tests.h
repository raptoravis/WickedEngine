#pragma once
#include "WickedEngine.h"


class TestsRenderer : public RenderPath3D
{
	wiLabel label;
	wiComboBox testSelector;
	wiCheckBox debugLightCulling;
	wiCheckBox postprocessBloomEnabled;
	wiECS::Entity ik_entity = wiECS::INVALID_ENTITY;
	wiScene::TransformComponent camera_transform;
public:
	void Load() override;
	void Update(float dt) override;
	void ResizeLayout() override;

	void RunJobSystemTest();
	void RunFontTest();
	void RunSpriteTest();
	void RunNetworkTest();

	void resetCamera();
	void updateCamera(float dt);
};

class Tests : public MainComponent
{
	TestsRenderer renderer;
public:
	void Initialize() override;
};

