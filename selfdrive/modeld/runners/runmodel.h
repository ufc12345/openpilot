#ifndef RUNMODEL_H
#define RUNMODEL_H

class RunModel {  // cppcheck-suppress "virtualDestructor"
public:
  virtual void addRecurrent(float *state, int state_size) {}
  virtual void addDesire(float *state, int state_size) {}
  virtual void addTrafficConvention(float *state, int state_size) {}
  virtual void execute(float *net_input_buf, int buf_size, bool trafficd = false) {}
};

#endif

