#pragma once
#include "IScene.h"

namespace Primitive{


class FirstTestScene : public IScene
{
public:
	FirstTestScene();
	~FirstTestScene();

	virtual void UploadModels(ModelLoader* const aModelLoader, GLTextureLoader* const aTextureLoader);

	virtual void Update(float dt, std::shared_ptr<Input> aInput);
	virtual void OnMouseMove(std::shared_ptr<Input> aInput);
	virtual void Init();
};


}
