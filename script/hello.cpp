#include <gazebo/common/Plugin.hh>

namespace gazebo
{
class WorldPluginTutorial : public WorldPlugin
{
public:
  WorldPluginTutorial() : WorldPlugin()
  {
     printf("Welcome to bob’s World!\n");
  }

  void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
  {
   
  }

};
GZ_REGISTER_WORLD_PLUGIN(WorldPluginTutorial)
}

