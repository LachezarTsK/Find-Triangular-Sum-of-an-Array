
/**
 * @param {number[]} input
 * @return {number}
 */
var triangularSum = function (input) {
    let currentUpperLimit = input.length;
    while (currentUpperLimit > 1) {
        for (let i = 0; i < currentUpperLimit - 1; ++i) {
            input[i] = (input[i] + input[i + 1]) % 10;
        }
        --currentUpperLimit;
    }
    return input[0];
};
