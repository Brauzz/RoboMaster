
>
convolution2d_input_1Placeholder*
dtype0*
shape: 
Q
random_uniform/shapeConst*
dtype0*%
valueB"             
?
random_uniform/minConst*
dtype0*
valueB
 *n���
?
random_uniform/maxConst*
dtype0*
valueB
 *n��=
y
random_uniform/RandomUniformRandomUniformrandom_uniform/shape*
dtype0*
seed2ɯ��*
seed���)*
T0
J
random_uniform/subSubrandom_uniform/maxrandom_uniform/min*
T0
T
random_uniform/mulMulrandom_uniform/RandomUniformrandom_uniform/sub*
T0
F
random_uniformAddrandom_uniform/mulrandom_uniform/min*
T0
m
convolution2d_1_W
VariableV2*
dtype0*
shape: *
	container *
shared_name 
�
convolution2d_1_W/AssignAssignconvolution2d_1_Wrandom_uniform*
validate_shape(*$
_class
loc:@convolution2d_1_W*
use_locking(*
T0
d
convolution2d_1_W/readIdentityconvolution2d_1_W*$
_class
loc:@convolution2d_1_W*
T0
6
ConstConst*
dtype0*
valueB *    
a
convolution2d_1_b
VariableV2*
dtype0*
shape: *
	container *
shared_name 
�
convolution2d_1_b/AssignAssignconvolution2d_1_bConst*
validate_shape(*$
_class
loc:@convolution2d_1_b*
use_locking(*
T0
d
convolution2d_1_b/readIdentityconvolution2d_1_b*$
_class
loc:@convolution2d_1_b*
T0
�
Conv2DConv2Dconvolution2d_input_1convolution2d_1_W/read*
paddingVALID*
strides
*
use_cudnn_on_gpu(*
data_formatNHWC*
T0
J
Reshape/shapeConst*
dtype0*%
valueB"             
P
ReshapeReshapeconvolution2d_1_b/readReshape/shape*
T0*
Tshape0
$
addAddConv2DReshape*
T0

ReluReluadd*
T0
t
MaxPoolMaxPoolRelu*
paddingVALID*
strides
*
data_formatNHWC*
ksize
*
T0
=
keras_learning_phasePlaceholder*
dtype0
*
shape: 
J
cond/SwitchSwitchkeras_learning_phasekeras_learning_phase*
T0

1
cond/switch_tIdentitycond/Switch:1*
T0

/
cond/switch_fIdentitycond/Switch*
T0

7
cond/pred_idIdentitykeras_learning_phase*
T0

G

cond/mul/yConst^cond/switch_t*
dtype0*
valueB
 *  �?
U
cond/mul/SwitchSwitchMaxPoolcond/pred_id*
_class
loc:@MaxPool*
T0
7
cond/mulMulcond/mul/Switch:1
cond/mul/y*
T0
S
cond/dropout/keep_probConst^cond/switch_t*
dtype0*
valueB
 *   ?
>
cond/dropout/ShapeShapecond/mul*
out_type0*
T0
\
cond/dropout/random_uniform/minConst^cond/switch_t*
dtype0*
valueB
 *    
\
cond/dropout/random_uniform/maxConst^cond/switch_t*
dtype0*
valueB
 *  �?
�
)cond/dropout/random_uniform/RandomUniformRandomUniformcond/dropout/Shape*
dtype0*
seed2���*
seed���)*
T0
q
cond/dropout/random_uniform/subSubcond/dropout/random_uniform/maxcond/dropout/random_uniform/min*
T0
{
cond/dropout/random_uniform/mulMul)cond/dropout/random_uniform/RandomUniformcond/dropout/random_uniform/sub*
T0
m
cond/dropout/random_uniformAddcond/dropout/random_uniform/mulcond/dropout/random_uniform/min*
T0
U
cond/dropout/addAddcond/dropout/keep_probcond/dropout/random_uniform*
T0
6
cond/dropout/FloorFloorcond/dropout/add*
T0
F
cond/dropout/divRealDivcond/mulcond/dropout/keep_prob*
T0
F
cond/dropout/mulMulcond/dropout/divcond/dropout/Floor*
T0
S
cond/Switch_1SwitchMaxPoolcond/pred_id*
_class
loc:@MaxPool*
T0
F

cond/MergeMergecond/Switch_1cond/dropout/mul*
T0*
N
S
random_uniform_1/shapeConst*
dtype0*%
valueB"          @   
A
random_uniform_1/minConst*
dtype0*
valueB
 *��L�
A
random_uniform_1/maxConst*
dtype0*
valueB
 *��L=
|
random_uniform_1/RandomUniformRandomUniformrandom_uniform_1/shape*
dtype0*
seed2���*
seed���)*
T0
P
random_uniform_1/subSubrandom_uniform_1/maxrandom_uniform_1/min*
T0
Z
random_uniform_1/mulMulrandom_uniform_1/RandomUniformrandom_uniform_1/sub*
T0
L
random_uniform_1Addrandom_uniform_1/mulrandom_uniform_1/min*
T0
m
convolution2d_2_W
VariableV2*
dtype0*
shape: @*
	container *
shared_name 
�
convolution2d_2_W/AssignAssignconvolution2d_2_Wrandom_uniform_1*
validate_shape(*$
_class
loc:@convolution2d_2_W*
use_locking(*
T0
d
convolution2d_2_W/readIdentityconvolution2d_2_W*$
_class
loc:@convolution2d_2_W*
T0
8
Const_1Const*
dtype0*
valueB@*    
a
convolution2d_2_b
VariableV2*
dtype0*
shape:@*
	container *
shared_name 
�
convolution2d_2_b/AssignAssignconvolution2d_2_bConst_1*
validate_shape(*$
_class
loc:@convolution2d_2_b*
use_locking(*
T0
d
convolution2d_2_b/readIdentityconvolution2d_2_b*$
_class
loc:@convolution2d_2_b*
T0
�
Conv2D_1Conv2D
cond/Mergeconvolution2d_2_W/read*
paddingVALID*
strides
*
use_cudnn_on_gpu(*
data_formatNHWC*
T0
L
Reshape_1/shapeConst*
dtype0*%
valueB"         @   
T
	Reshape_1Reshapeconvolution2d_2_b/readReshape_1/shape*
T0*
Tshape0
*
add_1AddConv2D_1	Reshape_1*
T0

Relu_1Reluadd_1*
T0
x
	MaxPool_1MaxPoolRelu_1*
paddingVALID*
strides
*
data_formatNHWC*
ksize
*
T0
L
cond_1/SwitchSwitchkeras_learning_phasekeras_learning_phase*
T0

5
cond_1/switch_tIdentitycond_1/Switch:1*
T0

3
cond_1/switch_fIdentitycond_1/Switch*
T0

9
cond_1/pred_idIdentitykeras_learning_phase*
T0

K
cond_1/mul/yConst^cond_1/switch_t*
dtype0*
valueB
 *  �?
]
cond_1/mul/SwitchSwitch	MaxPool_1cond_1/pred_id*
_class
loc:@MaxPool_1*
T0
=

cond_1/mulMulcond_1/mul/Switch:1cond_1/mul/y*
T0
W
cond_1/dropout/keep_probConst^cond_1/switch_t*
dtype0*
valueB
 *   ?
B
cond_1/dropout/ShapeShape
cond_1/mul*
out_type0*
T0
`
!cond_1/dropout/random_uniform/minConst^cond_1/switch_t*
dtype0*
valueB
 *    
`
!cond_1/dropout/random_uniform/maxConst^cond_1/switch_t*
dtype0*
valueB
 *  �?
�
+cond_1/dropout/random_uniform/RandomUniformRandomUniformcond_1/dropout/Shape*
dtype0*
seed2��K*
seed���)*
T0
w
!cond_1/dropout/random_uniform/subSub!cond_1/dropout/random_uniform/max!cond_1/dropout/random_uniform/min*
T0
�
!cond_1/dropout/random_uniform/mulMul+cond_1/dropout/random_uniform/RandomUniform!cond_1/dropout/random_uniform/sub*
T0
s
cond_1/dropout/random_uniformAdd!cond_1/dropout/random_uniform/mul!cond_1/dropout/random_uniform/min*
T0
[
cond_1/dropout/addAddcond_1/dropout/keep_probcond_1/dropout/random_uniform*
T0
:
cond_1/dropout/FloorFloorcond_1/dropout/add*
T0
L
cond_1/dropout/divRealDiv
cond_1/mulcond_1/dropout/keep_prob*
T0
L
cond_1/dropout/mulMulcond_1/dropout/divcond_1/dropout/Floor*
T0
[
cond_1/Switch_1Switch	MaxPool_1cond_1/pred_id*
_class
loc:@MaxPool_1*
T0
L
cond_1/MergeMergecond_1/Switch_1cond_1/dropout/mul*
T0*
N
5
ShapeShapecond_1/Merge*
out_type0*
T0
A
strided_slice/stackConst*
dtype0*
valueB:
C
strided_slice/stack_1Const*
dtype0*
valueB: 
C
strided_slice/stack_2Const*
dtype0*
valueB:
�
strided_sliceStridedSliceShapestrided_slice/stackstrided_slice/stack_1strided_slice/stack_2*
new_axis_mask *
Index0*

begin_mask *
ellipsis_mask *
end_mask*
T0*
shrink_axis_mask 
5
Const_2Const*
dtype0*
valueB: 
J
ProdProdstrided_sliceConst_2*
T0*
	keep_dims( *

Tidx0
:
stack/0Const*
dtype0*
valueB :
���������
:
stackPackstack/0Prod*
N*
T0*

axis 
@
	Reshape_2Reshapecond_1/Mergestack*
T0*
Tshape0
K
random_uniform_2/shapeConst*
dtype0*
valueB"      
A
random_uniform_2/minConst*
dtype0*
valueB
 *׳]�
A
random_uniform_2/maxConst*
dtype0*
valueB
 *׳]=
}
random_uniform_2/RandomUniformRandomUniformrandom_uniform_2/shape*
dtype0*
seed2��ӑ*
seed���)*
T0
P
random_uniform_2/subSubrandom_uniform_2/maxrandom_uniform_2/min*
T0
Z
random_uniform_2/mulMulrandom_uniform_2/RandomUniformrandom_uniform_2/sub*
T0
L
random_uniform_2Addrandom_uniform_2/mulrandom_uniform_2/min*
T0
_
	dense_1_W
VariableV2*
dtype0*
shape:
��*
	container *
shared_name 
�
dense_1_W/AssignAssign	dense_1_Wrandom_uniform_2*
validate_shape(*
_class
loc:@dense_1_W*
use_locking(*
T0
L
dense_1_W/readIdentity	dense_1_W*
_class
loc:@dense_1_W*
T0
9
Const_3Const*
dtype0*
valueB�*    
Z
	dense_1_b
VariableV2*
dtype0*
shape:�*
	container *
shared_name 
~
dense_1_b/AssignAssign	dense_1_bConst_3*
validate_shape(*
_class
loc:@dense_1_b*
use_locking(*
T0
L
dense_1_b/readIdentity	dense_1_b*
_class
loc:@dense_1_b*
T0
Z
MatMulMatMul	Reshape_2dense_1_W/read*
transpose_b( *
transpose_a( *
T0
-
add_2AddMatMuldense_1_b/read*
T0

Relu_2Reluadd_2*
T0
K
random_uniform_3/shapeConst*
dtype0*
valueB"   
   
A
random_uniform_3/minConst*
dtype0*
valueB
 *���
A
random_uniform_3/maxConst*
dtype0*
valueB
 *��=
}
random_uniform_3/RandomUniformRandomUniformrandom_uniform_3/shape*
dtype0*
seed2Ӄɰ*
seed���)*
T0
P
random_uniform_3/subSubrandom_uniform_3/maxrandom_uniform_3/min*
T0
Z
random_uniform_3/mulMulrandom_uniform_3/RandomUniformrandom_uniform_3/sub*
T0
L
random_uniform_3Addrandom_uniform_3/mulrandom_uniform_3/min*
T0
^
	dense_2_W
VariableV2*
dtype0*
shape:	�
*
	container *
shared_name 
�
dense_2_W/AssignAssign	dense_2_Wrandom_uniform_3*
validate_shape(*
_class
loc:@dense_2_W*
use_locking(*
T0
L
dense_2_W/readIdentity	dense_2_W*
_class
loc:@dense_2_W*
T0
8
Const_4Const*
dtype0*
valueB
*    
Y
	dense_2_b
VariableV2*
dtype0*
shape:
*
	container *
shared_name 
~
dense_2_b/AssignAssign	dense_2_bConst_4*
validate_shape(*
_class
loc:@dense_2_b*
use_locking(*
T0
L
dense_2_b/readIdentity	dense_2_b*
_class
loc:@dense_2_b*
T0
Y
MatMul_1MatMulRelu_2dense_2_W/read*
transpose_b( *
transpose_a( *
T0
/
add_3AddMatMul_1dense_2_b/read*
T0
"
SoftmaxSoftmaxadd_3*
T0
C
Variable/initial_valueConst*
dtype0*
valueB
 *  �?
T
Variable
VariableV2*
dtype0*
shape: *
	container *
shared_name 
�
Variable/AssignAssignVariableVariable/initial_value*
validate_shape(*
_class
loc:@Variable*
use_locking(*
T0
I
Variable/readIdentityVariable*
_class
loc:@Variable*
T0
E
Variable_1/initial_valueConst*
dtype0*
valueB
 *    
V

Variable_1
VariableV2*
dtype0*
shape: *
	container *
shared_name 
�
Variable_1/AssignAssign
Variable_1Variable_1/initial_value*
validate_shape(*
_class
loc:@Variable_1*
use_locking(*
T0
O
Variable_1/readIdentity
Variable_1*
_class
loc:@Variable_1*
T0
E
Variable_2/initial_valueConst*
dtype0*
valueB
 *    
V

Variable_2
VariableV2*
dtype0*
shape: *
	container *
shared_name 
�
Variable_2/AssignAssign
Variable_2Variable_2/initial_value*
validate_shape(*
_class
loc:@Variable_2*
use_locking(*
T0
O
Variable_2/readIdentity
Variable_2*
_class
loc:@Variable_2*
T0
?
dense_2_sample_weightsPlaceholder*
dtype0*
shape: 
7
dense_2_targetPlaceholder*
dtype0*
shape: 
?
Sum/reduction_indicesConst*
dtype0*
value	B :
P
SumSumSoftmaxSum/reduction_indices*
T0*
	keep_dims(*

Tidx0
%
divRealDivSoftmaxSum*
T0
4
Const_5Const*
dtype0*
valueB
 *���3
2
sub/xConst*
dtype0*
valueB
 *  �?
#
subSubsub/xConst_5*
T0
3
clip_by_value/MinimumMinimumdivsub*
T0
A
clip_by_valueMaximumclip_by_value/MinimumConst_5*
T0
"
LogLogclip_by_value*
T0
(
mulMuldense_2_targetLog*
T0
A
Sum_1/reduction_indicesConst*
dtype0*
value	B :
P
Sum_1SummulSum_1/reduction_indices*
T0*
	keep_dims( *

Tidx0

NegNegSum_1*
T0
?
Mean/reduction_indicesConst*
dtype0*
valueB 
O
MeanMeanNegMean/reduction_indices*
T0*
	keep_dims( *

Tidx0
3
mul_1MulMeandense_2_sample_weights*
T0
7

NotEqual/yConst*
dtype0*
valueB
 *    
A
NotEqualNotEqualdense_2_sample_weights
NotEqual/y*
T0
.
CastCastNotEqual*

DstT0*

SrcT0

5
Const_6Const*
dtype0*
valueB: 
C
Mean_1MeanCastConst_6*
T0*
	keep_dims( *

Tidx0
(
div_1RealDivmul_1Mean_1*
T0
5
Const_7Const*
dtype0*
valueB: 
D
Mean_2Meandiv_1Const_7*
T0*
	keep_dims( *

Tidx0
4
mul_2/xConst*
dtype0*
valueB
 *  �?
&
mul_2Mulmul_2/xMean_2*
T0
:
ArgMax/dimensionConst*
dtype0*
value	B :
G
ArgMaxArgMaxdense_2_targetArgMax/dimension*
T0*

Tidx0
<
ArgMax_1/dimensionConst*
dtype0*
value	B :
D
ArgMax_1ArgMaxSoftmaxArgMax_1/dimension*
T0*

Tidx0
)
EqualEqualArgMaxArgMax_1*
T0	
-
Cast_1CastEqual*

DstT0*

SrcT0

5
Const_8Const*
dtype0*
valueB: 
E
Mean_3MeanCast_1Const_8*
T0*
	keep_dims( *

Tidx0
D
PlaceholderPlaceholder*
dtype0*
shape: 
�
AssignAssignconvolution2d_1_WPlaceholder*
validate_shape(*$
_class
loc:@convolution2d_1_W*
use_locking( *
T0
:
Placeholder_1Placeholder*
dtype0*
shape: 
�
Assign_1Assignconvolution2d_1_bPlaceholder_1*
validate_shape(*$
_class
loc:@convolution2d_1_b*
use_locking( *
T0
F
Placeholder_2Placeholder*
dtype0*
shape: @
�
Assign_2Assignconvolution2d_2_WPlaceholder_2*
validate_shape(*$
_class
loc:@convolution2d_2_W*
use_locking( *
T0
:
Placeholder_3Placeholder*
dtype0*
shape:@
�
Assign_3Assignconvolution2d_2_bPlaceholder_3*
validate_shape(*$
_class
loc:@convolution2d_2_b*
use_locking( *
T0
@
Placeholder_4Placeholder*
dtype0*
shape:
��
|
Assign_4Assign	dense_1_WPlaceholder_4*
validate_shape(*
_class
loc:@dense_1_W*
use_locking( *
T0
;
Placeholder_5Placeholder*
dtype0*
shape:�
|
Assign_5Assign	dense_1_bPlaceholder_5*
validate_shape(*
_class
loc:@dense_1_b*
use_locking( *
T0
?
Placeholder_6Placeholder*
dtype0*
shape:	�

|
Assign_6Assign	dense_2_WPlaceholder_6*
validate_shape(*
_class
loc:@dense_2_W*
use_locking( *
T0
:
Placeholder_7Placeholder*
dtype0*
shape:

|
Assign_7Assign	dense_2_bPlaceholder_7*
validate_shape(*
_class
loc:@dense_2_b*
use_locking( *
T0
�
initNoOp^convolution2d_1_W/Assign^convolution2d_1_b/Assign^convolution2d_2_W/Assign^convolution2d_2_b/Assign^dense_1_W/Assign^dense_1_b/Assign^dense_2_W/Assign^dense_2_b/Assign^Variable/Assign^Variable_1/Assign^Variable_2/Assign"