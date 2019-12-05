#include "ResourceManager.h"


ResourceManager::ResourceManager()
{
}


ResourceManager::~ResourceManager()
{
}

ResourceManager * ResourceManager::getInstance()
{
	if (!s_Instance) return s_Instance = new ResourceManager();
	return s_Instance;
}

void ResourceManager::Init(const string path)
{
}

void ResourceManager::Load(string fileName)
{
	auto isExist = FileUtils::getInstance()->isFileExist(fileName);
	string content = "";
	if (isExist)
	{
		content = FileUtils::getInstance()->getStringFromFile(fileName);
	}
	stringstream ss(content);
	string line;
	string text, numberLine, idPath;

	getline(ss, line, '\n');
	istringstream s(line);
	s >> text >> numberLine;
	int size = stoi(numberLine);
	if (text == "#SPRITE")
	{
		for (int i = 0; i < size; i++)
		{
			//get ID
			getline(ss, line, '\n');
			string number, path;
			istringstream isNum(line);
			isNum >> text >> number;
			//get Path
			getline(ss, line, '\n');
			string path;
			istringstream isPath(line);
			isPath >> text >> path;

			int num = stoi(number);
			auto sprite = Sprite::create(path);
			this->m_sprite.insert(num, path);
		}
	}
}

Sprite * ResourceManager::GetSpriteById(char id)
{
	return nullptr;
}

/*Button * ResourceManager::GetButtonById(char id)
{
	return nullptr;
}*/



Label * ResourceManager::GetLabelById(char id)
{
	return nullptr;
}
