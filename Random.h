#if !defined RANDOM_H
#define RANDOM_H

class Random
{
   private:
      Random();
      void randomInit();

   public:
      virtual ~Random();
      static Random* getRandom();

      int getRandomInt(int lower, int upper); //this is trivial
      float getRandomFloat(float lower, float upper);
};

#endif
