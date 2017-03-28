/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_GRAPPLER_OPTIMIZERS_META_OPTIMIZER_H_
#define TENSORFLOW_GRAPPLER_OPTIMIZERS_META_OPTIMIZER_H_

#include "tensorflow/core/grappler/grappler_item.h"
#include "tensorflow/core/lib/core/status.h"
#include "tensorflow/core/protobuf/rewriter_config.pb.h"

namespace tensorflow {
namespace grappler {

bool MetaOptimizerEnabled(const RewriterConfig& cfg);

Status RunMetaOptimizer(const GrapplerItem& item, const RewriterConfig& cfg,
                        GraphDef* optimized_graph);

}  // namespace grappler
}  // namespace tensorflow

#endif  // TENSORFLOW_GRAPPLER_OPTIMIZERS_META_OPTIMIZER_H_
